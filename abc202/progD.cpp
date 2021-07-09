#include<bits/stdc++.h>
using namespace std;

int main(){

  int a,b,k;
  cin >> a >> b >> k;

  vector<char> s;
  for(int i=0;i<a;i++)s.push_back('a');
  for(int i=0;i<b;i++)s.push_back('b');

  int time=0;
  do{
    // for(int i=0;i<a+b;i++)cout << s[i];
    // cout << endl;
    time++;
    if(time==k){
      for(int i=0;i<a+b;i++)cout << s[i];
      cout << endl;
    }
  }while(next_permutation(s.begin(), s.end()));
}
