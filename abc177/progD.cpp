#include<bits/stdc++.h>
using namespace std;

int main(){

	int n,m;
	cin >> n >> m;
	if(m==0){
		cout << 1 << endl;
		return 0;
	}
	vector<vector<int>> edge(n);
	vector<int> dist(n,-1);
	int a,b;
	for(int i=0;i<m;i++){
		cin >> a >> b;a--;b--;
		edge[a].push_back(b);
		edge[b].push_back(a);
	}

	int ans=0;
	int sum=0;
	for(int start=0;start<n;start++){
		queue<int> que;
		sum=0;
		if(dist[start]==-1) que.push(start);
		int nv;
		while(!que.empty()){
			nv=que.front();
			que.pop();

			for(auto u:edge[nv]){
				if(dist[u]==-1){
					dist[u]++;
					sum++;
					que.push(u);
				}
			}
		}
		ans=max(ans,sum);
	}
	cout << ans << endl;
}
