#include<bits/stdc++.h>
using namespace std;

#define INF 1001001001 

int main(){

	int n;
	cin >> n;
	vector<int> x(n),y(n),z(n);
	for(int i=0;i<n;i++) cin >> x[i] >> y[i] >> z[i];
	int max_bit=(1<<n);
	
	//距離計算
	vector<vector<int>> dist(n,vector<int>(n));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j)continue;
			int cost=abs(x[j]-x[i]);
			cost+=abs(y[j]-y[i]);
			cost+=max(0,z[j]-z[i]);
			dist[i][j]=cost;		
		}
	}

	//dp[i][S]=iにいて(S)まわったときの、minコスト
	vector<vector<int>> dp(n,vector<int>(max_bit,INF));
	//初期化、iにいる時、s={i}の0→iのコストを入れる
	//これがみそ
	//最終的に何処かから0に帰ってきて欲しいから0にbitを立てない
	for(int i=1;i<n;i++){
		dp[i][1<<i]=dist[0][i];
	}
	
	for(int s=0;s<max_bit;s++){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(~s>>i&1)continue;//sにiが含まれていなかったらcontinue;
				if(s>>j&1)continue;//sにiが含まれてたらcontinue;
				/*cout << "i:" << i;
				cout << ",s:" << bitset<4>(s);
				cout << ",j:" << j;
				cout << ",dp[j]b:" << dp[i][s]+dist[i][j];
				cout << ",dp[j]a:" << dp[j][s|(1<<j)] << endl;*/
				dp[j][s|(1<<j)]=min(dp[i][s]+dist[i][j],dp[j][s|(1<<j)]);
			}
		}
	}

	//下の遷移だと無理、上の遷移だと大丈夫
	//→なんで？
	//sで回すと通った場所(sの立っているbit)の数が増えることで、
	//次の遷移を考える時点で現在の時点での最低コストが求まっている
	//
	//今まで注意してこなかったけど、これからは注意していかないといけない
	/*for(int i=0;i<n;i++){
		for(int s=0;s<max_bit;s++){
			for(int j=0;j<n;j++){
			  if(~s>>i&1)break;//sにiが含まれていなかったらcontinue;
				if(s>>j&1)continue;//sにiが含まれてたらcontinue;
				dp[j][s|(1<<j)]=min(dp[i][s]+dist[i][j],dp[j][s|(1<<j)]);
			}
		}
	}*/


	cout << dp[0][max_bit-1] << endl;
}
