#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,x;
  cin >> n >> x;

  vector<int> a(n);
  int sum=0;
  for(int i=0;i<n;i++){
    int a;
    cin >> a;
    if(i%2==1)a--;
    sum+=a;
  }

  if(sum<=x)cout << "Yes" << endl;
  else cout << "No" << endl;
}
