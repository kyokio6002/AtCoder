#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){

	int n;
	cin >> n;

	vector<int> x(n);
	ll ans1=0,ans2=0;
	int ans3=0;
	int a;
	for(int i=0;i<n;i++){
		cin >> a;
		x[i]=abs(a);
		ans3=max(ans3,x[i]);
	}

	//マンハッタン距離
	for(int i=0;i<n;i++) ans1+=x[i];

	//ユークリッド距離
	for(int i=0;i<n;i++) ans2+=(x[i]*(ll)x[i]);
	//ans2=sqrt(ans2);

	cout << ans1 << endl;
	cout << fixed << setprecision(15) << sqrt(ans2) << endl;
	cout << ans3 << endl;
}
