#include<bits/stdc++.h>
using namespace std;

int main(){

	bool flag=0;

	int n;
	cin >> n;
	int time=0;

	int a,b;
	for(int i=0;i<n;i++){
		cin >> a >> b;
		if(a==b){
			time++;
			if(time>=3)flag=1;
		}else{
			time=0;
		}
	}

	if(flag==1) cout << "Yes" << endl;
	else cout << "No" << endl;
}
