#include<bits/stdc++.h>
using namespace std;

using ll=long long;

ll culc(string s){
  ll score=0;
  for(int i=0;i<5;i++){
    int n=(s[i]-'0');
    ll add=1;
    for(int j=0;j<n;j++)add*=10;
    score+=add;
  }
  return score;
}

int main(){

  int k;
  cin >> k;
  string s,t;
  cin >> s >> t;

  cout << culc(s) << endl;
  cout << culc(t) << endl;

}
