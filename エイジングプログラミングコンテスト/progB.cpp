#include<bits/stdc++.h>
using namespace std;


int main(){

  int n;
  cin >> n;

  int num;
  int ans=0;
  for(int i=0;i<n;i++){
    cin >> num;
    if(i%2==0 && num%2==1) ans++;
  }

  cout << ans << endl;
}
