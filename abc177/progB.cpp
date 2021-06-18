#include<bits/stdc++.h>
using namespace std;

int main(){

	string s,t;
	cin >> s >> t;
	int ans=0;
	int now_max=0;
	for(int i=0;i<s.length()-t.length()+1;i++){
		now_max=0;
		for(int j=0;j<t.length();j++){
			if(s[j+i]==t[j])now_max++;
		}
		ans=max(ans,now_max);
	}

	cout << t.length()-ans << endl;
}
