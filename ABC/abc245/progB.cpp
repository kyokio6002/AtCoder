#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  map<int,int> num;
  for(int i=0;i<n;i++){
    int t;
    cin >> t;
    num[t]++;
  }

  for(int i=0;i<=2000;i++){
    if(!num[i]){
      cout << i << endl;
      break;
    }
  }
}
