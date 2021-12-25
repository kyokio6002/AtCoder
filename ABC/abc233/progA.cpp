#include<bits/stdc++.h>
using namespace std;

int main(){

  int x,y;
  cin >> x >> y;

  if(x>=y)cout << 0 << endl;
  else if((y-x)%10==0)cout << (y-x)/10 << endl;
  else cout << (y-x)/10+1 << endl;

}
