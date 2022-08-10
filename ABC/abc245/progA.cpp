#include<bits/stdc++.h>
using namespace std;

int main(){

  int a,b,c,d;
  cin >> a >> b >> c >> d;

  int taka=a*10000+b*100;
  int aoki=c*10000+d*100+1;

  if(taka>aoki)cout << "Aoki" << endl;
  else cout << "Takahashi" << endl;
}
