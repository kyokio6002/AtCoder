#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
using ll=long long;

int main(){

	int s;
	cin >> s;

	vector<ll> dp(s+1,0);
	dp[0]=1;

	for(int i=3;i<=s;i++){
		//cout << "i:" << i << endl;
		for(int j=0;j<=i-3;j++){
			//cout << j << ",";
			dp[i]+=dp[j];
			dp[i]%=mod;
		}
		//cout << endl;
	}

	cout << dp[s] << endl;

}
