#include<bits/stdc++.h>
using namespace std;

int main(){

	int h,w;
	cin >> h >> w;

	vector<vector<int>> mp(w,vector<int>(h));

	int m=101;
	for(int y=0;y<h;y++){
		for(int x=0;x<w;x++){
			cin >> mp[x][y];
			m=min(m,mp[x][y]);
		}
	}

	int ans=0;
	for(int y=0;y<h;y++){
		for(int x=0;x<w;x++){
			ans+=mp[x][y]-m;
		}
	}


	cout << ans << endl;
}
