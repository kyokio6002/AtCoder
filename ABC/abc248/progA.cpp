#include<bits/stdc++.h>
using namespace std;

int main(){
  
  vector<int> num(10);
  char n;
  for(int i=0;i<9;i++){
    cin >> n;
    num[int(n-'0')]++;
  }

  for(int i=0;i<10;i++)if(!num[i])cout << i << endl;
}
