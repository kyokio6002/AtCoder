#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int k;
	cin >> k;

	map<int,int> mp;
	int num=7%k;
	int ans=1;

	while(1){
		mp[num]++;
		if(num==0){
			cout << ans << endl;
			return 0;
		}
		if(mp[num]>1){
			cout << -1 << endl;
			return 0;
		}
		num=(num*10+7)%k;
		ans++;
	}

}
