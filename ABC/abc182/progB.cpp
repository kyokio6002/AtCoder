#include<bits/stdc++.h>
using namespace std;

int main(){

	int m=0;
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin >> a[i];
		m=max(m,a[i]);
	}



	int nowtop=0;
	int gcd;
	int ans=0;

	for(int k=2;k<=m;k++){
		gcd=0;
		for(int i=0;i<n;i++){
			if(a[i]%k==0) gcd++;
		}
		if(gcd>nowtop){
			ans=k;
			nowtop=gcd;
		}
	}
	cout << ans << endl;


}
