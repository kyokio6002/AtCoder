#include<bits/stdc++.h>
using namespace std;

using ll=long long;
int main(){

	ll n;
	cin >> n;

	ll ans=0;
	ll sum=0;
	vector<ll> a(n);
	for(int i=0;i<n;i++){
		cin >> a[i];
		sum=sum+a[i];
	}

	sort(a.begin(),a.end());
	int prio=a[0];
	sum=sum-a[0]*n;
	ans=sum;
	for(int i=1;i<n;i++){
		sum=sum-(a[i]-prio)*(n-i);
		ans+=sum;
		prio=a[i];
	}

	cout << ans << endl;
}
