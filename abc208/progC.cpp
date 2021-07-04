#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){

  ll n,k;
  cin >> n >> k;

  vector<pair<int,int>> id_index(n);
  ll bias = k/n;
  vector<ll> ans(n, bias);
  k-=bias*n;
  for(int i=0;i<n;i++){
    int id;
    cin >> id;
    id_index[i] = make_pair(id,i);
  }

  sort(id_index.begin(), id_index.end());
  for(int i=0;i<k;i++){
    ans[id_index[i].second]++;
  }

  for(int i=0;i<n;i++)cout << ans[i] << endl;

}

