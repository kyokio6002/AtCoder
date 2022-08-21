#include<bits/stdc++.h>
#include <cstdio>
#include <string>
#include <vector>
using namespace std;

int main(){

  int n;
  cin >> n;
  map<string,int> s;
  vector<string> ss(n);
  for(int i=0;i<n;i++){
    cin >> ss[i];
    s[ss[i]]++;
    if(s[ss[i]]>1){
      printf("%s(%d)\n",ss[i].c_str(),s[ss[i]]-1);
    }else{
      cout << ss[i] << endl;
    }
  }


}
