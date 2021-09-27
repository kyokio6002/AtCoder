#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
	
	int n;
	cin >> n;
	vector<int> a(n);
	ll ans=0;
	cin >> a[0];
	for(int i=1;i<n;i++){
		cin >> a[i];
		if(a[i]<a[i-1]){
			ans+=a[i-1]-a[i];
			a[i]+=a[i-1]-a[i];
		}
	}

	cout << ans << endl;

}
