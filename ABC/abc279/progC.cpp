#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){

  int h,w;
  cin >> h >> w;

  vector<vector<char>> s(w,vector<char>(h));
  vector<vector<char>> t(w,vector<char>(h));
  map<vector<char>,int> s_map;
  map<vector<char>,int> t_map;

  for(int y=0;y<h;y++){
    for(int x=0;x<w;x++)cin >> s[x][y];
  }
  for(int y=0;y<h;y++){
    for(int x=0;x<w;x++)cin >> t[x][y];
  }

  for(int x=0;x<w;x++){
    vector<char> s_now;
    vector<char> t_now;
    for(int y=0;y<h;y++){
      s_now.push_back(s[x][y]);
      t_now.push_back(t[x][y]);
    }
    s_map[s_now]++;
    t_map[t_now]++;
  }

  for(auto [key, count]:s_map){
    if(!t_map.count(key)){
      cout << "No" << endl;
      return 0;
    }

    if(t_map[key]<count){
      cout << "No" << endl;
      return 0;
    }

    t_map[key]-=count;
    if(t_map[key]==0)t_map.erase(key);
  }

  cout << "Yes" << endl;
}
