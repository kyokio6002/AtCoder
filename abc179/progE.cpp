#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
	
	ll n,x,m;
	cin >> n >> x >> m;

	vector<ll> count(m+1,-1);
	vector<ll> index(m+1,-1);
	vector<ll> dp(m+1,0);

	count[x]++;
	index[x]=0;
	dp[0]=x;
	ll nowmod=x;
	ll sum=x;

	for(ll i=1;i<n;i++){
		nowmod=nowmod*nowmod%m;
		sum+=nowmod;
		count[nowmod]++;
		if(count[nowmod]>0){
			//終了処理
			ll frontlen=index[nowmod];
			ll frontsum;
			if(frontlen==0) frontsum=0;
			else frontsum=dp[index[nowmod]-1];

			ll replen;
			if(frontlen==0)replen=i;
			else replen=i-index[nowmod];
			ll repsum;
			if(frontlen==0)repsum=dp[i-1];
			else repsum=dp[i-1]-dp[index[nowmod]-1];
			ll reptime=(n-frontlen)/replen;

			ll last=n-frontlen-reptime*replen;
			ll lastsum;
			if(frontlen==0){
				if(last==0)lastsum=0;
				else lastsum=dp[last-1];
			}else{
				lastsum=dp[index[nowmod]-1+last]-dp[index[nowmod]-1];
			}

		  /*cout << "frontlen:" << frontlen << endl;
			cout << "frontsum:" << frontsum << endl;		
			cout << "replen:" << replen << endl;
			cout << "repsum:" << repsum << endl;
			cout << "reptime:" << reptime << endl;
			cout << "last:" << last << endl;
			cout << "lastsum:" << lastsum << endl;*/
			
			ll ans=frontsum+reptime*repsum+lastsum;
			cout << ans << endl;
			return 0;
		}
		index[nowmod]=i;
		dp[i]=sum;
	}

	cout << dp[n-1] << endl;

}

