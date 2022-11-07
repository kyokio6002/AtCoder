#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  vector<int> p(n);
  for(int i=0;i<n;i++)cin >> p[i],p[i]*=-1;

  next_permutation(p.begin(),p.end());
  for(int i=0;i<n;i++)cout << -p[i] << " \n"[i+1==n];
}
