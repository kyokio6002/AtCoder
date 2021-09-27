#include<bits/stdc++.h>
using namespace std;

int main(){

  int a;
  int out=0;
  for(int i=0;i<5;i++){
    cin >> a;
    if(a==0){
      out = i+1;
    }
    //cout << a << endl;
  }

  cout << out << endl;
}
