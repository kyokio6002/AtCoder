#include<bits/stdc++.h>
using namespace std;

int main(){

  int x;
  cin >> x;
  int len=0;
  int xx=x;
  while(1){
    xx/=10;
    if(xx==0)break;
    len++;
  }
  cout << "len:" << len << endl;

  int nx=x/10+(x%10)*int(pow(10,len));
  cout << nx << endl;

}
