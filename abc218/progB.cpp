#include<bits/stdc++.h>
using namespace std;

int main(){

  vector<int> p(26);
  for(int i=0;i<26;i++)cin >> p[i];

  for(int i=0;i<26;i++)cout << char('a'+p[i]-1);
  cout << endl;
}
