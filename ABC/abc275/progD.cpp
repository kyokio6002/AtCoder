#include <bits/stdc++.h>
#include <vector>
using namespace std;

map<long long,long long> mp;

long long f(long long n){
  if(n==0)return 1;
  if(mp.count(n))return mp[n];
  return mp[n]=f(n/2)+f(n/3);
}

int main(){

  long long n;
  cin >> n;
  cout << f(n) << endl;

}
