#include <bits/stdc++.h>
using namespace std;

int main(){
  
  int n,a,b;
  cin >> n >> a >> b;

  int c;
  for(int i=0;i<n;i++){
    cin >> c;
    if(c==a+b){
      cout << i+1 << endl;
      return 0;
    }
  }
  
}
