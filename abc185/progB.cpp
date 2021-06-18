#include<bits/stdc++.h>
using namespace std;

int main(){

	int n,m,t;
	cin >> n >> m >>t;
	int maxN=n;
	int a,b;
	int time=0;
	bool flag=1;
	for(int i=0;i<m;i++){
		cin >> a >> b;
		n=n-(a-time);
		time=b;
		//cout << n << endl;
		if(n<=0)flag=0;
		n=n+(b-a);
		if(n>=maxN)n=maxN;
		
		//cout << n << endl;
	}
	n=n-(t-time);
	if(n<=0)flag=0;
	if(flag==0)cout << "No" << endl;
	else cout << "Yes" << endl;
}
