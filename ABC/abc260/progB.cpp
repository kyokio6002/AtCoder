#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

void mysort(vector<pair<int,int>> &a){
  int n=a.size();
  for(int i=n;i>=0;i--){
    for(int j=1;j<i;j++){
      if(a[j-1].first<=a[j].first){
        if(a[j-1].first==a[j].first && a[j-1].second<a[j].second)continue;
        pair<int,int> p=a[j];
        a[j]=a[j-1];
        a[j-1]=p;
      }
    }
  }
}

int main(){

  int n,x,y,z;
  cin >> n >> x >> y >> z;

  vector<pair<int,int>> a(n);
  vector<pair<int,int>> b(n);
  vector<pair<int,int>> ab(n);
  for(int i=0;i<n;i++){
    a[i].second=i;
    b[i].second=i;
    ab[i].second=i;
  }
  for(int i=0;i<n;i++)cin >> a[i].first;
  for(int i=0;i<n;i++)cin >> b[i].first;
  for(int i=0;i<n;i++)ab[i].first=a[i].first+b[i].first;

  mysort(a);
  mysort(b);
  mysort(ab);

  vector<int> ans;
  vector<bool> selected(n,false);
  int count=0;
  int i=0;
  while(count<x){
    if(selected[a[i].second]){
      i++;
      continue;
    }
    selected[a[i].second]=true;
    i++;
    count++;
  }
  count=0;
  i=0;
  while(count<y){
    if(selected[b[i].second]){
      i++;
      continue;
    }
    selected[b[i].second]=true;
    i++;
    count++;
  }
  count=0;
  i=0;
  while(count<z){
    if(selected[ab[i].second]){
      i++;
      continue;
    }
    selected[ab[i].second]=true;
    i++;
    count++;
  }

  for(int i=0;i<n;i++){
    if(selected[i])cout << i+1 << endl;
  }

}
