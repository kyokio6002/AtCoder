#include<bits/stdc++.h>
using namespace std;

int main(){

  string s,t;
  cin >> s >> t;
  vector<pair<char,int>> ss,tt;
  ss.emplace_back(s[0],1);
  tt.emplace_back(t[0],1);
  for(int i=1;i<s.length();i++){
    if(s[i]==ss.back().first){
      ss.back().second++;
    }else{
      ss.emplace_back(s[i],1);
    }
  }
  for(int i=1;i<t.length();i++){
    if(t[i]==tt.back().first){
      tt.back().second++;
    }else{
      tt.emplace_back(t[i],1);
    }
  }

  if(ss.size()!=tt.size()){
    cout << "No" << endl;
    
  }else{
    for(int i=0;i<ss.size();i++){
      if(ss[i].first!=tt[i].first){
        cout << "No" << endl;
        return 0;
      }else{
        if(ss[i].second>tt[i].second){
          cout << "No" << endl;
          return 0;
        }else if(ss[i].second==1 && ss[i].second<tt[i].second){
          cout << "No" << endl;
          return 0;
        }
      }
    }

    cout << "Yes" << endl;
  }
}
