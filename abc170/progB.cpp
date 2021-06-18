#include<bits/stdc++.h>
using namespace std;

int main(){

  int num,leg;
  cin >> num >> leg;

  for(int kame=0;kame<=num;kame++){
    if(leg==kame*4+(num-kame)*2){
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
}
