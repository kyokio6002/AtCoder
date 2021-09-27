#include<bits/stdc++.h>
using namespace std;


int main(){

  int n;
  cin >> n;
  int  ans=0;
  int y;
  vector<int> x(n);
  for(int j=0;j<2;j++){
    for(int i=0;i<n;i++){
      cin >> y;
      if(j==0)x[i]=y;
      else x[i]*=y;
    }
  }

  for(int i=0;i<n;i++)ans+=x[i];
  if(ans==0)cout << "Yes" << endl;
  else cout << "No" << endl;
}
