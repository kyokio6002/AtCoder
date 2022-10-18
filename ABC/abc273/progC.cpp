#include <bits/stdc++.h>
using namespace std;

int bin_search(vector<int> &a, int target){
  int begin=0;
  int end=a.size()-1;
  int midd=(end-begin)/2;

  while(begin<=end){
    if(a[midd]==target){
      return a.size()-(midd+1);
    }else if(a[midd]>target){
      end=midd-1;
    }else{
      begin=midd+1;
    }
    midd=begin+(end-begin)/2;
    // cout << "begin:" << begin << endl;
    // cout << "midd:" << midd << endl;
    // cout << "end:" << end << endl;
  }

  return -1;
}

int main(){

  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> b;
  map<int,int> mp;
  for(int i=0;i<n;i++){
    int t;
    cin >> t;
    mp[t]++;
    a[i]=t;
  }

  for(auto [key,value]:mp)b.push_back(key);
  sort(b.begin(),b.end());
  // for(int i=0;i<b.size();i++)cout << b[i] << ",";cout << endl;

  map<int,int> ans;
  for(int i=0;i<n;i++){
    int count=bin_search(b, a[i]);
    ans[count]++;
  }

  for(int i=0;i<n;i++){
    cout << ans[i] << endl;
  }


}
