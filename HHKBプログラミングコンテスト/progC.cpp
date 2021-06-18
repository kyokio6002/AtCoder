#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin >> n;

	vector<int> num(20000001,0);

	int ans=0;
	int now;
	for(int i=0;i<n;i++){
		cin >> now;
		num[now]++;
		if(ans==now){
			for(int j=ans+1;j<20000001;j++){
				if(num[j]==0){
					ans=j;
					break;
				}
			}
		}
		cout << ans << endl;
	}

}
