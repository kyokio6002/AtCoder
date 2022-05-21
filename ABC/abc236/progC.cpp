#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,m;
  cin >> n >> m;

  vector<string> station;
  map<string,int> mp;
  string s;
  for(int i=0;i<n;i++){
    cin >> s;
    station.push_back(s);
  }
  for(int i=0;i<m;i++){
    cin >> s;
    mp[s]++;
  }

  for(int i=0;i<n;i++){
    string s_name=station[i];
    if(mp[s_name]>0)cout << "Yes" << endl;
    else cout << "No" << endl;
  }

}
