#include<bits/stdc++.h>
using namespace std;

int main(){

	map<int,int> mp;
	char c;
	int num;
	string s;
	cin >> s;
	int sum=0;
	int len=s.length();

	for(int i=0;i<len;i++){
		num = (s[i]-'0');
		sum+=num;
		num=num%3;
		mp[num]++;
	}

	if(sum%3==0){
		cout << 0 << endl;
	}else if(sum%3==1){
		if(mp[1]>=1 && len>=2){
			cout << 1 << endl;
		}else if(mp[2]>=2 && len>=3){
			cout << 2 << endl;
		}else{
			cout << -1 << endl;
		}
	}else if(sum%3==2){
		if(mp[2]>=1 && len>=2){
			cout << 1 << endl;
		}else if(mp[1]>=2 && len>=3){
			cout << 2 << endl;
		}else{
			cout << -1 << endl;
		}
	}

}


