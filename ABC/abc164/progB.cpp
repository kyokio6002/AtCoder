#include<bits/stdc++.h>
using namespace std;

int main(){

  int tAtack,tHp;
  int aAtack,aHp;

  cin >> tHp >> tAtack;
  cin >> aHp >> aAtack;

  int timeT = (aHp+tAtack-1)/tAtack;//高橋くんが倒す回数
  int timeA = (tHp+aAtack-1)/aAtack;//青木くんが倒す回数
  //倒す回数が少ない方がかち

  if(timeT < timeA) cout << "Yes" << endl;
  else if(timeT == timeA) cout << "Yes" << endl;
  else cout << "No" << endl;
}
