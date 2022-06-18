#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  vector<int> t(4);
  int p=0;
  int a;
  for(int i=0;i<n;i++){
    cin >> a;
    t[0]=1;
    for(int i=3;i>=0;i--){
      if(t[i]){
        if(i+a>3){
          t[i]=0;
          p++;
        }else{
          t[i]=0;
          t[i+a]=1;
        }
      }
    }
  }

  cout << p << endl;

}
