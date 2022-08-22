#include<bits/stdc++.h>
using namespace std;

int main(){

  int y;
  cin >> y;

  for(int i=0;i<4;i++)y%4==2?y:y+=1;
  cout << y << endl;
}
