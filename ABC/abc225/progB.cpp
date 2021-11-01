#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;

  vector<map<int,int>> edge(n);
  int a,b;
  for(int i=0;i<n-1;i++){
    cin >> a >> b;
    a--,b--;
    edge[a][b]++;
    edge[b][a]++;
  }

  int flagC=0;
  int flagE=0;
  for(int i=0;i<n;i++){
    if(edge[i].size()==n-1)flagC=1;
    else if(edge[i].size()==1)flagE++;
  }

  flagE-=n-2;

  if(flagC && flagE)cout << "Yes" << endl;
  else cout << "No" << endl;

}
