#include<bits/stdc++.h>
#include <vector>
using namespace std;

int n,m;
map<string,int> mp;
string ans="notfound!";
vector<string> s;

void dfs(string ss, vector<int> used, int last_underline, int count){

  // cout << ss << endl;

  if(count==n){
    if(!mp.count(ss))ans=ss;
    return;
  }

  for(int i=0;i<=n;i++){
    if(used[i] && i!=n)continue;
    if(i==n){
      if(last_underline>=1){
        dfs(ss+"_"+s[i], used, --last_underline, count);
      }else{
        continue;
      }
    }else{
      vector<int> now_used=used;
      now_used[i]++;
      dfs(ss+"_"+s[i], now_used, last_underline, count+1);
    }
  }

  return;
}


int main(){

  cin >> n >> m;
  s.resize(n+1);
  int sum_len=0;
  for(int i=0;i<n;i++){
    cin >> s[i];
    sum_len+=s[i].length();
  }
  s[n]="_";

  string ss;
  for(int i=0;i<m;i++){
    cin >> ss;
    mp[ss]++;
  }

  // 条件1、2で不可能な場合
  if(sum_len+n>=16){
    cout << -1 << endl;
    return 0;
  }

  int last_underline=16-sum_len-(n-1);
  // cout << last_underline << endl;
  // cout << sum_len << endl;
  for(int i=0;i<n;i++){
    // cout << i << endl;

    vector<int> f_used(n+1);
    ss=s[i];
    f_used[i]++;
    dfs(ss,f_used,last_underline,1);
  }

  // cout << "ans:" << ans << endl;
  if(ans!="notfound!")cout << ans << endl;
  else cout << -1 << endl;

}
