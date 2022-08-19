#include<bits/stdc++.h>
using namespace std;

int main(){

  int k;
  cin >> k;

  int hour=21;
  int min=00;

  hour+=k/60;
  min+=(k%60);

  printf("%02d:%02d\n",hour%24,min);
}
