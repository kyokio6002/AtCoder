#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int n;
  cin >> n;
  vector<int> num(2*n+1,0);

  for(int i=0;i<2*n+1;i++){
    for(int j=0;j<2*n+1;j++){
      if(num[j]==0){
        cout << j+1 << endl;
        num[j]++;
        break;
      }
    }
    int n;
    cin >> n;
    if(n==0)return 0;
    num[n-1]++;
  }
}
