#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,m;
  cin >> n >> m;

  vector<queue<int>> a(m);
  int k,b;
  for(int i=0;i<m;i++){
    cin >> k;
    map<int,int> mp;
    for(int j=0;j<k;j++){
      cin >> b;
      a[i].push(b);

      // 同じ筒状に同じ値がないかチェック
      mp[b]++;
      // if(mp[b]>1){
      //   cout << "No" << endl;
      //   return 0;
      // }
    }
  }


  map<int,int> empty_hole;
  while(1){
    map<int,pair<int,int>> mp;
    int flag=1;
    for(int i=0;i<m;i++){
      // 空の筒はスキップ
      if(a[i].empty()){
        empty_hole[i]++;
        if(empty_hole.size()==m){
          cout << "Yes" << endl;
          return 0;
        }
      }else{
        b=a[i].front();
        if(mp[b].first){
          a[i].pop();
          a[mp[b].second].pop();
          flag=0;
        }else{
          mp[b].first++;
          mp[b].second=i;
        }
      }
    }

    if(flag){
      cout << "No" << endl;
      return 0;
    }
  }
}
