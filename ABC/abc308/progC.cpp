#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

long long gcd(long a, long b){
  if(a%b == 0){
    return b;
  }else{
    return gcd(b, a%b);
  }
}

int main(){

  int n;
  cin >> n;
  vector<pair<long long,long long>> ps(n);
  long long ggcd;
  long long a,b;
  for(int i=0;i<n;i++){
    cin >> a >> b;
    ps[i]={a,b};
    if(i!=0)ggcd=gcd(ggcd, a+b);
    else ggcd=a+b;
  }

  cout << "ggcd:" << ggcd << endl;
  map<long long, vector<int>> mp;
  for(int i=0;i<n;i++){
    long long t=ggcd/(ps[i].first+ps[i].second)*ps[i].first;
    mp[-t].push_back(i+1);
  }

  for(auto [t,vec]:mp){
    cout << "t:" << t << endl;
    for(int i=0;i<vec.size();i++)cout << vec[i] << " ";
  }cout << endl;
  
}
