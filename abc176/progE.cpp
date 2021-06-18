#include<bits/stdc++.h>
using namespace std;

int main(){

	int H,W,m;
	cin >> H >> W >> m;
	vector<vector<int>> grid(W,vector<int>(H));//map
	vector<int> h(H);//各行の数
	vector<int> w(W);//各行の数

	vector<int> hindex;//最大数のindex
	vector<int> windex;//最大数のindex

	int ans=0;

	int x,y;
	int xmax_index,ymax_index;
	int xmax,ymax;
	for(int i=0;i<m;i++){
		cin >> y >> x;y--;x--;
		grid[x][y]=1;
		h[y]++;
		w[x]++;
		if(h[ymax_index]<h[y]){
			ymax_index=y;
			ymax=h[ymax_index];
		}
		if(w[xmax_index]<w[x]){
			xmax_index=x;
			xmax=w[xmax_index];
		}
	}

	for(int y=0;y<H;y++){
		if(h[y]==ymax){
			hindex.push_back(y);
		}
	}
	for(int x=0;x<W;x++){
		if(w[x]==xmax){
			windex.push_back(x);
		}
	}

	bool flag=0;
	ans=ymax+xmax-1;
	for(int y=0;y<hindex.size();y++){
		for(int x=0;x<windex.size();x++){
			if(grid[windex[x]][hindex[y]]==0){
				ans++;
				flag=1;
				break;
			}
			if(flag==1)break;
		}
	}

	cout << ans << endl;

}
