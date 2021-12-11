#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  map<string,int> mp;

  string s;
  int ans=0;
  string sans;
  for(int i=0;i<n;i++){
    cin >> s;
    mp[s]++;
    if(ans<mp[s]){
      ans=mp[s];
      sans=s;
    }
  }

  cout << sans << endl;


}

