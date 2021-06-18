#include<bits/stdc++.h>
using namespace std;

int main(){

	string a,b;
	cin >> a >> b;

	int sum=0;
	int ans=0;
	for(int i=0;i<a.size();i++){
		sum+=(a[i]-'0');
	}
	ans=sum;
	sum=0;
	for(int i=0;i<b.size();i++){
		sum+=(b[i]-'0');
	}
	ans=max(sum,ans);
	cout << ans << endl;
}
