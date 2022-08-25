#include <algorithm>
#include<bits/stdc++.h>
#include <valarray>
#include <vector>
using namespace std;

void speed_insert(vector<int> &pp,int n, int size){
  // 二分探索
  int start=-1;
  int end=size-1;
  int center;
  while(end-start>1){
    center=start+(end-start)/2;

    // cout << "start:" << start << endl;
    // cout << "center:" << center << endl;
    // cout << "end:" << end << endl;
    // cout << endl;

    if(pp[center]>=n){
      start=center;
    }else{
      end=center;
    }
  }
  vector<int>::iterator itr=pp.begin()+center;
  pp.insert(itr, n);
}

int main(){

  int n,k;
  cin >> n >> k;
  k--;

  vector<int> p(n);
  for(int i=0;i<n;i++)cin >> p[i];
  vector<int> pp(n);
  for(int i=0;i<k;i++)pp[i]=p[i];
  sort(pp.rbegin(),pp.rend());

  // for(int i=0;i<pp.size();i++)cout << pp[i] << ",";cout << endl;

  for(int i=k;i<n;i++){
    speed_insert(pp, p[i], i);
    // for(int j=0;j<pp.size();j++)cout << pp[j] << ",";cout << endl;
    cout << pp[k] << endl;
  }


}
