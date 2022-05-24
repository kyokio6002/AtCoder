#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){

  ll x;
  cin >> x;

  if(x>0){
    cout << x/10 << endl;
  }else{
    x=-1*x+9;
    x/=-10;
    cout << x << endl;
  }

}
