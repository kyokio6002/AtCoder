#include<bits/stdc++.h>
using namespace std;

int main(){

  string S,T;
  cin >> S >> T;
  int count=0;

  for(int i=0;i<S.length();i++){
    if(S[i]==T[i]) count++;
    else break;
  }

  if(count==S.length() && T.length()==S.length()+1) cout << "Yes" << endl;
  else cout << "No"<< endl;
}
