#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,k;
  cin >> n >> k;
  vector<int> a(n);
  vector<int> b(k);
  for(int i=0;i<n;i++)cin >> a[i];
  for(int i=0;i<k;i++)cin >> b[i];

  int a_max=-1;
  for(int i=0;i<n;i++)a_max=max(a_max,a[i]);

  for(int i=0;i<n;i++){
    if(a[i]==a_max){
      for(int j=0;j<k;j++){
        if(b[j]==i+1){
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }

  cout << "No" << endl;

}
