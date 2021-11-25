#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,k,a;
  cin >> n >> k >> a;

  cout << ((a-1)+(k-1)%n)%n+1 << endl;
}
