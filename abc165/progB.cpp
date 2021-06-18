#include<bits/stdc++.h>
using namespace std;

int main(){

  long long now = 100;
  long long count = 0;
  long long X;
  cin >> X;

  while(1){
    count ++;
    now *= 1.01;
    cout << count << " " << now << endl;
    if(now>=X) break;
  }

  cout << count << endl;
}
