#include<bits/stdc++.h>
using namespace std;

int main(){

	int a;
	int ans=101;
	for(int i=0;i<4;i++){
		cin >> a;
		ans=min(ans,a);
	}

	cout << ans << endl;
}
