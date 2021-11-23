#include<bits/stdc++.h>
using namespace std;

int main(){

  int s,t,x;
  cin >> s >> t >> x;

  if(s>t){
    if(s>x){
      if(x<t)cout << "Yes" << endl;
      else cout << "No" << endl;
    }else{
      if(x>=s)cout << "Yes" << endl;
      else cout << "No" << endl;
    }
  }else{
    if(s<=x && x<t)cout << "Yes" << endl;
    else cout << "No" << endl;
  }

}
