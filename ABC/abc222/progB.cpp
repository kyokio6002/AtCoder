#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,p;
  cin >> n >> p;

  int ans=0;
  int a;
  for(int i=0;i<n;i++){
    cin >> a;
    if(a<p)ans++;
  }

  cout << ans << endl;

}
