#include<bits/stdc++.h>
using namespace std;

int main(){

  int v;
  int a,b,c;
  cin >> v >> a >> b >> c;

  for(int i=0;i<1000000;i++){
    if(v<a){
      cout << "F" << endl;
      return 0;
    }
    v-=a;

    if(v<b){
      cout << "M" << endl;
      return 0;
    }
    v-=b;

    if(v<c){
      cout << "T" << endl;
      return 0;
    }
    v-=c;
  }
}
