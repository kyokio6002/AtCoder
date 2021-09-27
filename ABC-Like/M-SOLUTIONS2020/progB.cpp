#include<bits/stdc++.h>
using namespace std;

int main(){

  int red,green,blue,k;
  cin >> red >> green >> blue >> k;

  int last=k;
  while(1){
    if(green>red)break;
    if(last==0 && green<=red){
      cout << "No" << endl;
      return 0;
    }
    green*=2;
    last--;
  }

  while(1){
    if(blue>green){
      cout << "Yes" << endl;
      return 0;
    }
    if(last==0 && blue<=green){
      cout << "No" << endl;
      return 0;
    }
    blue*=2;
    last--;
  }
}
