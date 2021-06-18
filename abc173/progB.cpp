#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  string result;
  map<string,int> mp;

  for(int i=0;i<n;i++){
    cin >> result;
    mp[result]++;
  }

  cout << "AC x " << mp["AC"] << endl;
  cout << "WA x " << mp["WA"] << endl;
  cout << "TLE x " << mp["TLE"] << endl;
  cout << "RE x " << mp["RC"] << endl;
}
