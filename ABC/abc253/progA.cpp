#include<bits/stdc++.h>
using namespace std;

int main(){

  int a,b,c;
  cin >> a >> b >> c;

  if(a<=b && b<=c)cout << "Yes" << endl;
  else if(c<=b && b<=a)cout << "Yes" << endl;
  else cout << "No" << endl;

}
