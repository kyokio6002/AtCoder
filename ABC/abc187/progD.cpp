#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){

	int n;
	cin >> n;
	vector<ll> score(n);

	ll aoki,taka;
	ll sumaoki=0;
	for(int i=0;i<n;i++){
		cin >> aoki >> taka;
		score[i]=2*aoki+taka;
		sumaoki+=aoki;
	}

	sort(score.rbegin(),score.rend());

	int ans=0;
	ll sum=0;
	for(int i=0;i<n;i++){
		sum+=score[i];
		ans++;
		if(sum>sumaoki)break;
	}


	cout << ans << endl;
}
