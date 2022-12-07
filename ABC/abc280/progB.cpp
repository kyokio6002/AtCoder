#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;

  int s;
  int sum=0;
  vector<int> a;
  for(int i=0;i<n;i++){
    cin >> s;
    a.push_back(s-sum);
    sum=s;
  }

  for(int i=0;i<a.size();i++)cout << a[i] << " \n"[i==a.size()-1];
}
