#include<bits/stdc++.h>
using namespace std;

int main(){

	int h,w;
	cin >> h >> w;
	int sx,sy,gx,gy;
	cin >> sy >> sx >> gy >> gx;
	sy--;sx--;gy--;gx--;
	vector<vector<char>> s(w,vector<char>(h));
	
	for(int y=0;y<h;y++){
		for(int x=0;x<w;x++){
			cin >> s[x][y];
		}
	}

	vector<vector<int>> dist(w,vector<int>(h));
	vector<vector<int>> magic(w,vector<int>(h));
	queue<pair<int,int>> que1,que2;

	que1.emplace(sx,sy);
	pair<int,int> p;
	int x,y,nx,ny;
	vector<pair<int,int>> dir={{1,0},{-1,0},{0,1},{0,-1},
	                           {1,1},{-1,-1},{1,-1},{-1,1},
														 {2,0},{-2,0},{0,2},{0,-2},
														 {1,2},{-1,2},{1,-2},{-1,-2},
														 {2,1},{2,-1},{-2,1},{-2,-1},
														 {2,2},{-2,2},{2,-2},{-2,-2}};
	int m=0;
	while(1){
		if(que1.empty() && que2.empty())break;
		if(que1.empty()){
			que1=que2;
			queue<pair<int,int>> empty;
			que2=empty;
			m++;
		}
		p=que1.front();
		que1.pop();
		x=p.first;
		y=p.second;
		if(dist[x][y]==1)continue;
		magic[x][y]=m;
		dist[x][y]=1;
		if(dist[gx][gy]==1)break;

		/*cout << "que1:" << x << "," << y << endl; 
		queue<pair<int,int>> q=que1;
		while(!q.empty()){
			p=q.front();
			cout << p.first << "," << p.second << endl;
			q.pop();
		}*/
		for(int i=0;i<24;i++){
			nx=x+dir[i].first;
			ny=y+dir[i].second;
			if(nx>=w || nx<0)continue;
			if(ny>=h || ny<0)continue;
			if(dist[nx][ny]==1)continue;
			if(s[nx][ny]=='#')continue;
			if(i<4){
				que1.emplace(nx,ny);
			}else{
				que2.emplace(nx,ny);
			}
			/*cout << endl;
			cout << x << "," << y << endl;
			cout << "magic" << endl;
			for(int a=0;a<h;a++){
				for(int b=0;b<w;b++){
					cout << magic[b][a] << " ";
				}cout << endl;
			}
			cout << "dist" << endl;
			for(int a=0;a<h;a++){
				for(int b=0;b<w;b++){
					cout << dist[b][a] << " ";
				}cout << endl;
			}*/
		}
	}

	if(dist[gx][gy]==0)cout << -1 << endl;
	else cout << magic[gx][gy] << endl;

	
  /*cout << endl;
	cout << "dist" << endl;
	for(int y=0;y<h;y++){
		for(int x=0;x<w;x++){
			cout << dist[x][y] << " ";
		}cout << endl;
	}

	cout << endl;
	cout << "magic" << endl;
	for(int y=0;y<h;y++){
		for(int x=0;x<w;x++){
			cout << magic[x][y] << " ";
		}cout << endl;
	}

	cout << endl;
	cout << "map" << endl;
	for(int y=0;y<h;y++){
		for(int x=0;x<w;x++){
			cout << s[x][y] << " ";
		}cout << endl;
	}*/
}



