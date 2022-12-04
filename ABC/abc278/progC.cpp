#include <bits/stdc++.h>
#include <regex>
using namespace std;

int main(){

  int n,q;
  cin >> n >> q;

  int t,a,b;
  map<int,map<int,int>> follow;

  for(int i=0;i<q;i++){
    cin >> t >> a >> b;
    a--,b--;
    if(t==1){
      follow[a][b]=true;
    }else if(t==2){
      follow[a][b]=false;
    }else if(t==3){
      if(follow[a][b] && follow[b][a])cout << "Yes" << endl;
      else cout << "No" << endl;
    }
  }

}
