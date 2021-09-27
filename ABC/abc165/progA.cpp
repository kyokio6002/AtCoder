#include<bits/stdc++.h>
using namespace std;

int main(){

  int K,A,B;
  cin >> K >> A >> B;

  for(int i=A;i<=B;i++){
    if(i%K==0){
      cout << "OK" <<endl;
      break;
    }else if(i==B){
      cout << "NG" << endl;
    }
  }
}
