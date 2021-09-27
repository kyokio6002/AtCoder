#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){

	vector<ll> x(2);
	vector<ll> y(2);
	for(int i=0;i<2;i++) cin >> x[i];
	for(int i=0;i<2;i++) cin >> y[i];

	ll ans=-1000000000000000000;
	ll now;
			
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			now = x[i]*y[j];
			//cout << now << endl;
			ans=max(ans,now);
		}
	}
	
	cout << ans << endl;

}
