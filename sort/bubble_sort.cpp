#include<bits/stdc++.h>
using namespace std;

int main(){

  int n=8;
  vector<int> a(n);
  for(int i=0;i<n;i++) cin >> a[i];
  int time=0;


  for(int i=0;i<n;i++){
    for(int j=0;j<n-i;j++){
      time++;
      if(a[j]<a[j-1]) swap(a[j],a[j-1]);
    }
    for(int k=0;k<n;k++) cout << a[k] << " ";
    cout << endl;
  }

  cout << time << endl;
}
