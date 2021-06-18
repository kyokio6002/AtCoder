#include<bits/stdc++.h>
using namespace std;

int n,k,ans=0;
vector<int> dist;
vector<vector<int>> cost;
vector<int> perm;

int colc(vector<int> a){
	int sum=0;
	for(int i=0;i<n;i++){
		if(i+1==n){
			sum+=cost[a[i]][0];
			//cout << cost[a[i]][0];
		}else{
			 sum+=cost[a[i]][a[i+1]];
			 //cout << cost[a[i]][a[i+1]] << "+";
		}
	}//cout << endl;
	//cout << "sum:" << sum << endl;
	return sum;
}

/*
void next(){

	for(int i=0;i<n;i++) perm[i]=i;

	do{
		if(colc(perm)==k) ans++;
	}while(next_permutation(perm.begin()+1,perm.end()));
}*/


void dfs(int len,int n){

	if(len==n){
		if(colc(perm)==k) ans++;
	}
	for(int i=1;i<n;i++){
		if(dist[i]==1)continue;
		dist[i]=1;
		perm[len]=i;
		dfs(len+1,n);
		dist[i]=0;
	}
}




int main(){

	cin >> n >> k;
	vector<vector<int>> a(n,vector<int>(n));
	vector<int> b(n);
	cost=a;
	perm=dist=b;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin >> cost[i][j];
		}
	}

	perm[0]=0;

	//解けなくて悔しいので2種類用意させていただきました。
	dfs(1,n);
	//next();
	cout << ans << endl;
}
