#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,x;
  cin >> n >> x;

  map<int,int> mp;
  vector<int> a(n);
  for(int i=0;i<n;i++)cin >> a[i];

  int count=n;
  int next=x-1;
  while(count){
    count--;
    mp[next]++;
    next=a[next]-1;
  }

  cout << mp.size() << endl;

}
