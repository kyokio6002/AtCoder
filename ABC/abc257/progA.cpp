#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,x;
  cin >> n >> x;
  vector<char> cs;
  for(int i=0;i<26;i++){
    for(int j=0;j<n;j++){
      cs.push_back('A'+i);
    }
  }

  cout << cs[x-1] << endl;

}
