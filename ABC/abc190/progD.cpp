#include<bits/stdc++.h>
using namespace std;

//using ll=long long;

int main(){
  
  long long n;
  cin >> n;

  int ans = 0;
  int max_i = int(pow(2*n,0.5));
  max_i++;
  int exe = 0;
  for(int i=1;i<=max_i;i++){
    // 奇数の場合
    if(i%2==1){
      if(n%i==0){
        ans++;
      }
    }else{
      if(2*n%i==0 && ((2*n/i)-1)%2==0){
        ans++;
        if((((2*n/i)-i+1)/2==0))exe++;
        if((((2*n/i)-i+1)/2==1))exe++;
      }
    }
  }
  ans -= exe;
  ans *= 2;
  cout << ans << endl;
}
