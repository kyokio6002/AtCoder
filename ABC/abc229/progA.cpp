#include<bits/stdc++.h>
using namespace std;

int main(){

  string s1,s2;
  cin >> s1 >> s2;

  int flag=1;
  if(s1[0]=='#' && s1[1]=='.' && s2[0]=='.' && s2[1]=='#')flag=0;
  if(s1[0]=='.' && s1[1]=='#' && s2[0]=='#' && s2[1]=='.')flag=0;

  if(flag)cout << "Yes" << endl;
  else cout << "No" << endl;

}
