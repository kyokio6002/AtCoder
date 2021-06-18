#include<bits/stdc++.h>
using namespace std;

int main(){

  int x,y;
  cin >> x >> y;

  if(x==y)cout << (x+y)/2 << endl; //どっちか使うのはなんかかわいそう
  else cout << 3-(x+y) << endl;
}
