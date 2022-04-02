#include<bits/stdc++.h>
using namespace std;

int main(){

  map<int,int> x;
  map<int,int> y;
  int a,b;
  for(int i=0;i<3;i++){
    cin >> a >> b;
    x[a]++;
    y[b]++;
  }

  int ansx,ansy;
  for(auto xx:x)if(xx.second==1)ansx=xx.first;
  for(auto yy:y)if(yy.second==1)ansy=yy.first;

  cout << ansx << " " << ansy << endl;

}
