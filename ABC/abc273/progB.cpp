#include <bits/stdc++.h>
using namespace std;

int main(){

  long long x,k;
  cin >> x >> k;

  long long d=1;
  for(int i=0;i<k;i++){
    if(x/d%10>=5)x=(x/(d*10)+1)*(d*10);
    else x=x/(d*10)*(d*10);
    d*=10;
  }

  cout << x << endl;
}
