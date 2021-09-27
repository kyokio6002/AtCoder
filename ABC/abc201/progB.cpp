#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int n;
  cin >> n;
  vector<pair<int,string>> m(n);
  int t;
  string s;
  for(int i=0;i<n;i++){
    cin >> s >> t;
    m[i]=make_pair(t,s);
  }

  sort(m.rbegin(),m.rend());

  cout << m[1].second << endl;

}
