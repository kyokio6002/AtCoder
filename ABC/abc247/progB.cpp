#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;

  vector<pair<string,string>> ss(n);
  string first,second;
  for(int i=0;i<n;i++){
    cin >> first >> second;
    ss[i]={first, second};
  }

  for(int i=0;i<n;i++){
    vector<string> names{ss[i].first,ss[i].second};
    int flag=0;
    for(int j=0;j<2;j++){
      for(int t=0;t<n;t++){
        if(i==t)continue;
        if(ss[t].first==names[j] || ss[t].second==names[j]){
          flag++;
          break;
        }
      }
    }
    if(flag==2){
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
}
