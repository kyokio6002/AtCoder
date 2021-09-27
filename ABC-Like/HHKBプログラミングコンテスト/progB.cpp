#include<bits/stdc++.h>
using namespace std;

int main(){

	int h,w;
	cin >> h >> w;
	int ans=0;

	vector<vector<char>> mp(h,vector<char>(w));
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			cin >> mp[i][j];
		}
	}

	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			if(mp[i][j]=='.'){
				if(i+1<h && mp[i+1][j]=='.') ans++;
				if(j+1<w && mp[i][j+1]=='.') ans++;
			}
		}
	}

	cout << ans << endl;
}
