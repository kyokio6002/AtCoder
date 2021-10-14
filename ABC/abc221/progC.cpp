#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){

  string s;
  cin >> s;

  vector<int> v;
  ll ans=0;
  for(int i=0;i<s.length();i++)v.push_back(s[i]-'0');
  sort(v.begin(),v.end());

  do{

    // for(int i=0;i<s.length();i++)cout << v[i];
    // cout << endl;
    int num1,num2;
    for(int i=1;i<s.length();i++){
      if(v[0]==0 || v[i]==0)continue;
      num1=v[0];
      for(int l=1;l<i;l++){
        num1*=10;
        num1+=v[l];
      }
      num2=v[i];
      for(int r=i+1;r<s.length();r++){
        num2*=10;
        num2+=v[r];
      }
      ans=max(ans,ll(num1)*num2);
    }
  }while(next_permutation(v.begin(),v.end()));

  cout << ans << endl;

}
