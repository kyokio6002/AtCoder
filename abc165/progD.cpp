#include<bits/stdc++.h>
using namespace std;

int main(){

  long long A,B,N;
  cin >> A >> B >> N;

  long long ans=0;
  
  long long x = B-1;
  while(1){
    cout << x << endl;
    if(x<=N) break;
    x--;
  }
  long long num1 = (A*x/B);
  long long num2 = (x/B);
  ans = num1-A*num2;

  cout << ans << endl;
}
