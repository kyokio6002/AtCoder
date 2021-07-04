#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){

  int n;
  cin >> n;

  int sum=0;
  int i=1;
  while(1){
    sum+=i;
    if(sum>=n){
      cout << i << endl;
      return 0;
    }
    i++;
  }
}
