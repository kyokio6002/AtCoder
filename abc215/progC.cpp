#include<bits/stdc++.h>
using namespace std;

int main(){
  
  string s;
  int k;
  cin >> s >> k;

  sort(s.begin(),s.end());
  map<string,int> mp;

  int ans=0;
  do{
    mp[s]++;
    ans++;
    if(ans==k){
      cout << s << endl;
      return 0;
    }
  }while(next_permutation(s.begin(),s.end()));

}
