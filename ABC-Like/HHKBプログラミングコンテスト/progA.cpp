#include<bits/stdc++.h>
using namespace std;

int main(){

	char s,t;
	cin >> s >> t;

	if(s=='Y'){
		if(t=='a') t='A';
		else if(t=='b') t='B';
		else t='C';
	}

	cout << t << endl;
}
