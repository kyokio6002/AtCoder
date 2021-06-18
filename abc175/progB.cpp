#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){

	int n;
	cin >> n;
	vector<ll> l(n);
	for(int i=0;i<n;i++) cin >> l[i];
	int ans=0;
	sort(l.begin(),l.end());

	for(int i=0;i<n-2;i++){
		for(int j=i+1;j<n-1;j++){
			if(l[i]==l[j]) continue;
			for(int k=j+1;k<n;k++){
				if(l[i]!=l[k] && l[j]!=l[k]){
					if(l[i]+l[j]>l[k]) ans++;
				}
			}
		}
	}

	cout << ans << endl;


}
