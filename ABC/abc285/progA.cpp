#include <bits/stdc++.h>
#include <set>
using namespace std;

int main(){

  int a,b;
  cin >> a >> b;
  if(a>b)swap(a,b);

  if(2*a==b || 2*a+1==b)cout << "Yes" << endl;
  else cout << "No" << endl;
}
