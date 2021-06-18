#include<bits/stdc++.h>
using namespace std;

int main(){

	int h,w,n,m;
	cin >> h >> w >> n >> m;
	vector<vector<int>> mp(w,vector<int>(h,-1));
	vector<vector<int>> xinfo(w,vector<int>(h,-1));
	vector<vector<int>> yinfo(w,vector<int>(h,-1));
	vector<vector<int>> ansmp(w,vector<int>(h));
	int a,b;
	int now;//1=akari,0=block;
	for(int i=0;i<n;i++){
		cin >> a >> b;a--;b--;
		mp[b][a]=1;
	}
	for(int i=0;i<m;i++){
		cin >> a >> b;a--;b--;
		mp[b][a]=0;
	}

	for(int y=0;y<h;y++){
		now=0;
		for(int x=w-1;x>=0;x--){
			if(x==0){
				if(mp[x][y]==-1){
					xinfo[x][y]=now;
					continue;
				}else if(mp[x][y]==1){
					xinfo[x][y]=1;
					continue;
				}else if(mp[x][y]==0){
					if(now==1){
						xinfo[x+1][y]=1;
						xinfo[x][y]=0;
						continue;
					}
				}
			}
			if(mp[x][y]==0){
				if(now==1){
					xinfo[x+1][y]=1;
					xinfo[x][y]=0;
					now=0;
				}else if(now==0){
					xinfo[x][y]=0;
				}
			}else if(mp[x][y]==1){
				now=1;
			}
		}
	}

	for(int x=0;x<w;x++){
		now=0;
		for(int y=h-1;y>=0;y--){
			if(y==0){
				if(mp[x][y]==-1){
					yinfo[x][y]=now;
					continue;
				}else if(mp[x][y]==1){
					yinfo[x][y]=1;
					continue;
				}else if(mp[x][y]==0){
					if(now==1){
						yinfo[x+1][y]=1;
						yinfo[x][y]=0;
						continue;
					}
				}
			}
			if(mp[x][y]==0){
				if(now==1){
					yinfo[x][y+1]=1;
					yinfo[x][y]=0;
					now=0;
				}else if(now==0){
					yinfo[x][y]=0;
				}
			}else if(mp[x][y]==1){
				now=1;
			}
		}
	}


	//x,yの換算
	for(int y=0;y<h;y++){
		now=0;
		for(int x=0;x<w;x++){
			if(xinfo[x][y]!=-1){
				now=xinfo[x][y];
			}
			ansmp[x][y]+=now;
		}
	}
	for(int x=0;x<w;x++){
		now=0;
		for(int y=0;y<h;y++){
			if(yinfo[x][y]!=-1){
				now=yinfo[x][y];
			}
			ansmp[x][y]+=now;
		}
	}

	int ans=0;
	for(int y=0;y<h;y++){
		for(int x=0;x<w;x++){
			if(ansmp[x][y]!=0)ans++;
		}
	}


	cout << ans << endl;
	
	cout << "mp:" << endl;
	for(int y=0;y<h;y++){
		for(int x=0;x<w;x++){
			if(mp[x][y]==-1)cout << ". ";
			else if(mp[x][y]==0)cout << "# ";
			else if(mp[x][y]==1)cout << "o "; 
		}cout << endl;
	}cout << endl;

	cout << "ansmp:" << endl;
	for(int y=0;y<h;y++){
		for(int x=0;x<w;x++){
			cout << ansmp[x][y] << " ";
		}cout << endl;
	}cout << endl;

	cout << "xinfo:" << endl;
	for(int y=0;y<h;y++){
		for(int x=0;x<w;x++){
			if(xinfo[x][y]==-1){
				cout << "- ";
				continue;
			}
			cout << xinfo[x][y] << " ";
		}cout << endl;
	}cout << endl;

	cout << "yinfo:" << endl;
	for(int y=0;y<h;y++){
		for(int x=0;x<w;x++){
			if(yinfo[x][y]==-1){
				cout << "- ";
				continue;
			}
			cout << yinfo[x][y] << " ";
		}cout << endl;
	}cout << endl;
}






