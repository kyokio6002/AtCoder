#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define mod 9

int main(){

	string s;
	cin >> s;
	int ans=0;
	for(int i=0;i<s.length();i++){
		ans=ans+(s[i]-'0');
		ans=ans%mod;
	}
	if(ans==0){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
}
