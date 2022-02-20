#include<bits/stdc++.h>
using namespace std;

int main(){
  int a,b;
  cin >> a >> b;

  if(abs(a-b)==1)cout << "Yes" << endl;
  else if(a==1 & b==10)cout << "Yes" << endl;
  else cout << "No" << endl;
}
