#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;

  vector<int> num(n);
  int a;
  for(int i=0;i<4*n-1;i++){
    cin >> a;
    num[a-1]++;
  }

  for(int i=0;i<n;i++){
    if(num[i]!=4){
      cout << i+1 << endl;
      break;
    }
  }

}
