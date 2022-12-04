#include <bits/stdc++.h>
using namespace std;

int main(){

  int h,m;
  cin >> h >> m;


  while(1){
    int new_h=h/10*10+m/10;
    int new_m=h%10*10+h%10;
    if(new_h<24 && new_m<60)break;

    m++;
    if(m==60){
      h=(h+1)%24;
      m=0;
    }
  }

  cout << h << " " << m << endl;

}
