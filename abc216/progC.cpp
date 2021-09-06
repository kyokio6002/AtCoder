#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){

  ll n;
  cin >> n;
  vector<char> ans;

  while(1){
    if(n%2){
      n--;
      ans.push_back('A');
    }
    n/=2;
    ans.push_back('B');
    if(n==0)break;
  }

  for(int i=0;i<ans.size();i++){
    cout << ans[ans.size()-1-i];
  }cout << endl;
}
