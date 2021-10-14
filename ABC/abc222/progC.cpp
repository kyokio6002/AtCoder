#include<bits/stdc++.h>
using namespace std;

int change(char a){
  if(a=='G')return 0;
  else if(a=='C')return 1;
  else return 2;
}


int main(){

  int n,m;
  cin >> n >> m;
  int a1,a2;
  char c;
  vector<vector<int>> a(2*n,vector<int>(m));
  for(int i=0;i<2*n;i++){
    for(int j=0;j<m;j++){
      cin >> c;
      a[i][j]=change(c);
    }
  }

  vector<pair<int,int>> rank(2*n);  // wins,index 
  for(int i=0;i<2*n;i++)rank[i].second=2*n-1-i;

  for(int j=0;j<m;j++){
    for(int i=0;i<n;i++){
      int index1=2*n-1-rank[2*i].second;
      int index2=2*n-1-rank[2*i+1].second;
      a1=a[index1][j];
      a2=a[index2][j];
      // cout << index1+1 << "vs" << index2+1 << endl;

      if(a1==a2)continue;
      else if((a1+1)%3==a2)rank[2*i].first++;
      else rank[2*i+1].first++;
    }
    sort(rank.rbegin(),rank.rend());
    // for(int t=0;t<2*n;t++)printf("(%d,%d),",2*n-1-rank[t].second+1,rank[t].first);
    // cout << endl;
  }

  for(int i=0;i<2*n;i++)cout << 2*n-1-rank[i].second+1 << endl;

}
