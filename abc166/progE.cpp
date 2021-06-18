#include<bits/stdc++.h>
using namespace std;

int main(){

  int N;
  cin >> N;

  map<long long,int> mp;
  long long count = 0;

  for(int i=0;i<N;i++){
    int a;
    cin >> a;

    count += mp[i-a];
    mp[i+a]++;
  }

  cout << count << endl;

}
