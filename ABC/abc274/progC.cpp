#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;

  vector<int> ame(100100100, -1);
  ame[1]=0;
  int a;
  for(int i=1;i<=n;i++){
    cin >> a;
    ame[2*i]=ame[a]+1;
    ame[2*i+1]=ame[a]+1;
  }

  for(int i=1;i<=2*n+1;i++)cout << ame[i] << endl;

}
