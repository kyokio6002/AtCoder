#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){

	int n;
	cin >> n;
	vector<ll> a(n);
	for(int i=0;i<n;i++) cin >> a[i];

	ll money=1000;
	ll kabu=0;
	ll ans=0;
	for(int i=0;i<n;i++){
		//手数料がないから毎回うる
		money=money+kabu*a[i];
		kabu=0;
		//次の日に株が上がる場合
		if(a[i]<a[i+1] && i!=n-1){
			kabu=money/a[i];
			money=money-kabu*a[i];
		}
		ans=max(ans,money);
	}

	cout << ans << endl;

}

