#include<bits/stdc++.h>
using namespace std;
 
using ll=long long;

int main(){
 
	ll n;
	cin >> n;
 
	set<ll> st;
	for(ll i=1;i*i<=n;i++){
		if(n%i==0){
			st.insert(i);
			st.insert(n/i);
		}
	}
 
	for(auto u:st){
		cout << u << endl;
	}
}
