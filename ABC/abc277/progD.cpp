#include <bits/stdc++.h>
#include <vector>
using namespace std;

long long n,mod;
vector<long long> a;
vector<vector<long long>> x;
vector<vector<long long>> x_mod;
long long ans;

void dfs(long long now, vector<long long> &used){

  if(now<0)cout << 10/now << endl;

  long long sum=0;
  for(long long i=0;i<used.size();i++){
    if(used[i])continue;
    sum+=a[i];
  }
  ans=min(ans,sum);


  if(x_mod[now].size()>0){
    long long x_mod_index=-1;
    for(long long i=0;i<x_mod[now].size();i++){
      // 使ってなかったらこれを使う
      if(!used[x_mod[now][i]]){
        x_mod_index=x_mod[now][i];
        break;
      }
    }
    if(x_mod_index!=-1){
      used[x_mod_index]++;
      dfs(a[x_mod_index], used);
      used[x_mod_index]--;
    }
  }

  if(x[now].size()>0){
    long long x_index=-1;
    for(long long i=0;i<x[now].size();i++){
      // 使ってなかったらこれを使う
      if(!used[x[now][i]]){
        x_index=x[now][i];
        break;
      }
    }
    if(x_index!=-1){
      used[x_index]++;
      dfs(a[x_index], used);
      used[x_index]--;
    }
  }

}

int main(){

  cin >> n >> mod;
  a.resize(n+10);
  x.resize(max(n,mod)+10);
  x_mod.resize(max(n,mod)+10);

  // x_mod[i]:(x+1)mod mがiになるcardのindex
  for(long long i=0;i<n;i++){
    cin >> a[i];
    x[a[i]].push_back(i);
    x_mod[(a[i]+1)%mod].push_back(i);
    ans+=a[i];
  }
  

  for(long long i=0;i<n;i++){
    vector<long long> used(n);
    used[i]++;
    dfs(a[i], used);
  }

  cout << ans << endl;

}
