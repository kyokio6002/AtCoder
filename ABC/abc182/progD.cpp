#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){

	int n;
	cin >> n;
	vector<ll> sum(n);
	vector<ll> a(n);
	vector<ll> allsum(n);

	ll ans=0;
	ll maxsum=0;

	cin >> a[0];
	sum[0]=a[0];
	allsum[0]=a[0];
	maxsum=a[0];
	if(n==1){
		if(a[0]>0) cout << a[0] << endl;
		else cout << 0 << endl;
		return 0;
	}
	
	for(int i=1;i<n;i++){
		cin >> a[i];
		sum[i]=sum[i-1]+a[i];
		maxsum=max(maxsum,sum[i]);
		allsum[i]=allsum[i-1]+sum[i];
		ans=max(ans,allsum[i-1]+maxsum);
		//cout << allsum[i] << endl;
	}

	cout << ans << endl;
}


