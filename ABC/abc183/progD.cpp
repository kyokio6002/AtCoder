#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){

	int n,w;
	cin >> n >> w;
	map<int,ll> mp;

	int s,t,p;
	for(int i=0;i<n;i++){
		cin >> s >> t >> p;
		mp[s]+=p;
		mp[t]-=p;
	}

	ll sum=0;
	for(auto m:mp){
		sum+=m.second;
		if(sum>w){
			cout << "No" << endl;
			return 0;
		}
	}

	cout << "Yes" << endl;
}
