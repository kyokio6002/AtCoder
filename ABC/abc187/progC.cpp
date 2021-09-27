#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin >> n;

	map<string,int> a;
	map<string,int> b;
	string s;
	string ans="satisfiable";

	for(int i=0;i<n;i++){
		cin >> s;
		if(s[0]=='!'){
			s=s.substr(1,s.length());
			a[s]++;
			if(b[s]>=1)ans=s;
		}else{
			b[s]++;
			if(a[s]>=1)ans=s;
		}
	}


	cout << ans << endl;
}
