#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  int x;
  cin >> n >> x;
  x*=100;
  int sum=0;
  int v,p;
  for(int i=1;i<=n;i++){
    cin >> v >> p;
    sum+=v*p;
    if(sum>x){
      cout << i << endl;
      return 0;
    }
   }

   cout << -1 << endl;
}
