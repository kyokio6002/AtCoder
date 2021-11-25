#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  vector<int> s(n);
  for(int i=0;i<n;i++)cin >> s[i];

  int ans=n;
  int flag;
  for(int i=0;i<n;i++){
    flag=0;
    for(int a=1;a<=333;a++){
      for(int b=a;b<=333;b++){
        if(4*a*b+3*a+3*b==s[i]){
          ans--;
          flag=1;
          break;
        }
      }
      if(flag)break;
    }
  }

  cout << ans << endl;
}
