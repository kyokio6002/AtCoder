#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){
	
	int n;
	cin >> n;

	ll ans=0;
	ll now=0;
	ll still=0;
	for(int i=0;i<n;i++){
		ll a,b;
		cin >> a >> b;
		still=(a-1)*(a)/2;
		now=b*(b+1)/2;
		ans+=(now-still);
	}

	cout << ans << endl;

}
