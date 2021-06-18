#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define mod 1000000007

int main(){

	int h,w;
	cin >> h >> w;
	vector<vector<char>> s(w,vector<char>(h));
	for(int y=0;y<h;y++){
		for(int x=0;x<w;x++){
			cin >> s[x][y];
		}
	}

	vector<vector<ll>> dp(w,vector<ll>(h));
	vector<vector<ll>> xsum(w,vector<ll>(h));
	vector<vector<ll>> ysum(w,vector<ll>(h));
	vector<vector<ll>> xysum(w,vector<ll>(h));
	dp[0][0]=xsum[0][0]=ysum[0][0]=xysum[0][0]=1;

	for(int y=0;y<h;y++){
		for(int x=0;x<w;x++){
			if(s[x][y]=='#')continue;

			//x方向の計算
			if(x-1>=0)dp[x][y]=(dp[x][y]+xsum[x-1][y])%mod;
			//y方向の計算
			if(y-1>=0)dp[x][y]=(dp[x][y]+ysum[x][y-1])%mod;
			//xy方向の計算
			if(x-1>=0 && y-1>=0)dp[x][y]=(dp[x][y]+xysum[x-1][y-1])%mod;

			xsum[x][y]=ysum[x][y]=xysum[x][y]=dp[x][y];
			if(x-1>=0)xsum[x][y]=(xsum[x-1][y]+dp[x][y])%mod;
			if(y-1>=0)ysum[x][y]=(ysum[x][y-1]+dp[x][y])%mod;
			if(x-1>=0 && y-1>=0)xysum[x][y]=(xysum[x-1][y-1]+dp[x][y])%mod;
			
		}
	}

	/*for(int y=0;y<h;y++){
		for(int x=0;x<w;x++){
			cout << dp[x][y] << " ";
		}
		cout << endl;
	}

	cout << "x" << endl;
	for(int y=0;y<h;y++){
		for(int x=0;x<w;x++){
			cout << xsum[x][y] << " ";
		}
		cout << endl;
	}
	cout << "y" << endl;
	for(int y=0;y<h;y++){
		for(int x=0;x<w;x++){
			cout << ysum[x][y] << " ";
		}
		cout << endl;
	}
	cout << "xy" << endl;
	for(int y=0;y<h;y++){
		for(int x=0;x<w;x++){
			cout << xysum[x][y] << " ";
		}
		cout << endl;
	}*/

	cout << dp[w-1][h-1] << endl;

}
