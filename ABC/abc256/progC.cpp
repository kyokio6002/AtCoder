#include<bits/stdc++.h>
using namespace std;

int main(){

  int h1,h2,h3;
  int w1,w2,w3;
  cin >> h1 >> h2 >> h3 >> w1 >> w2 >> w3;
  int ans=0;

  for(int a11=1;a11<=28;a11++){
    for(int a12=1;a12<=28;a12++){
      for(int a21=1;a21<=28;a21++){
        for(int a22=1;a22<=28;a22++){
          int a13=w1-a11-a12;
          int a23=w2-a21-a22;

          int a31=h1-a11-a21;
          int a32=h2-a12-a22;
          int a33=h3-a13-a23;

          // printf("%2d,%2d,%2d\n",a11,a12,a13);
          // printf("%2d,%2d,%2d\n",a21,a22,a23);
          // printf("%2d,%2d,%2d\n",a31,a32,a33);
          
          if(a13>0 && a23>0 && a31>0 && a32>0 && a33>0){
            if(a33==w3-a31-a32)ans++;
          }
        }
      }
    }
  }

  cout << ans << endl;

}
