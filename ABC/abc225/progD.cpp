#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,q;
  cin >> n >> q;

  vector<pair<int,int>> train(n);
  for(int i=0;i<n;i++)train[i]=make_pair(i,i);

  int qy;
  int x,y;
  for(int i=0;i<q;i++){
    cin >> qy;
    if(qy==1){
      cin >> x >> y;
      x--;
      y--;
      train[x].second=y;
      train[y].first=x;
    }else if(qy==2){
      cin >> x >> y;
      x--;
      y--;
      train[x].second=x;
      train[y].first=y;
    }else{
      cin >> x;x--;
      int now=x;
      while(1){
        if(train[now].first==now)break;
        now=train[now].first;
      }
      vector<int> ans;
      while(1){
        ans.push_back(now);
        if(train[now].second==now)break;
        now=train[now].second;
      }
      cout << ans.size() << " ";
      for(int i=0;i<ans.size();i++)cout << ans[i]+1 << " ";
      cout << endl;
    }
  }
}
