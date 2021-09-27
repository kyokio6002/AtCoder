#include<bits/stdc++.h>
using namespace std;

#define mod 998244353
using ll = long long;

int main(){

	int n,k;
	cin >> n >> k;

	vector<int> l(k),r(k);
	for(int i=0;i<k;i++) cin >> l[i] >> r[i];

	vector<ll> dp(n+1);
	vector<ll> dpsum(n+1);
	dp[1]=1;
	dpsum[1]=1;

	int rj,lj;
	for(int i=2;i<=n;i++){
		for(int j=0;j<k;j++){
			rj=i-l[j];
			lj=max(0,i-r[j]-1);
			if(rj<0) continue;
			dp[i]+=dpsum[rj]-dpsum[lj];
			dp[i]=(dp[i]+mod)%mod;
		}
		//cout << i << ":" << dp[i] << endl;
		dpsum[i]=dpsum[i-1]+dp[i];
		dpsum[i]=dpsum[i]%mod;
		//cout << dpsum[i] << endl;
	}


	cout << dp[n] << endl;
}
