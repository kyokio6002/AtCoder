#include<bits/stdc++.h>
using namespace std;

int main(){

  int h,w,n;
  cin >> h >> w >> n;

  map<int,int> xmp;
  map<int,int> ymp;
  map<int,int> xx;
  map<int,int> yy;

  vector<pair<int,int>> ps(n);

  for(int i=0;i<n;i++){
    int a,b;
    cin >> a >> b;
    ps[i]=make_pair(a,b);
    yy[a]++;
    xx[b]++;
  }

  int t=0;
  for(auto x:xx){
    xmp[x.first]=t+1;
    t++;
  }
  t=0;
  for(auto y:yy){
    ymp[y.first]=t+1;
    t++;
  }

  for(int i=0;i<n;i++){
    int y=ps[i].first;
    int x=ps[i].second;

    cout << ymp[y] << " " << xmp[x] << endl;
  }
  
}
