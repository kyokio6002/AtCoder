#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin >> n;

	int ans=0;
	int sum; 
	for(int a=1;a<=n;a++){
		sum=n/a;
		if(a*sum==n)sum--;
		ans+=sum;
	}

	cout << ans << endl;

}
