#include<bits/stdc++.h>
using namespace std;

int main(){

  vector<int> a(10);
  int start=0;
  for(int i=0;i<10;i++)cin >> a[i];

  for(int i=0;i<3;i++)start=a[start];

  cout << start << endl;

}
