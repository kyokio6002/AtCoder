#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
using ll = long long;

int main(){

	int n;
	cin >> n;
	vector<ll> a(n);
	ll sum=0;
	for(int i=0;i<n;i++){ 
		cin >> a[i];
		sum=(sum+a[i])%mod;
	}
	
	ll ans=0;
	for(int i=0;i<n-1;i++){
		sum=sum-a[i];
		sum=(sum+mod)%mod;
		ans=(ans+(a[i]*sum)%mod)%mod;
	}

	cout << ans << endl;

}
