#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,m;
  cin >> n >> m;

  vector<queue<int>> a(m);
  vector<vector<int>> pos(n);

  int k,b;
  for(int i=0;i<m;i++){
    cin >> k;
    map<int,int> mp;
    for(int j=0;j<k;j++){
      cin >> b;b--;
      a[i].push(b);
      pos[b].push_back(i);
    }
  }

  vector<int> count(n);
  queue<int> que;
  for(int i=0;i<m;i++){
    b=a[i].front();
    count[b]++;
    if(count[b]==2)que.push(b);
  }

  int ans=n;
  while(!que.empty()){
    b=que.front();
    que.pop();
    ans--;
    for(int i=0;i<2;i++){
      int p=pos[b][i];
      a[p].pop();
      if(!a[p].empty()){
        int nb=a[p].front();
        count[nb]++;
        if(count[nb]==2)que.push(nb);
      }
    }
  }

  if(ans)cout << "No" << endl;
  else cout << "Yes" << endl;

}
