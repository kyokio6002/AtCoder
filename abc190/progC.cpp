#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,m;
  cin >> n >> m;
  vector<pair<int,int>> sel(m);
  int a,b;
  int c,d;
  for(int i=0;i<m;i++){
    cin >> a >> b;
    a--;
    b--;
    sel[i].first=a;
    sel[i].second=b;
  }

  int k;
  cin >> k;
  int last=(1<<k);
  vector<pair<int,int>> which_dish(k);
  for(int i=0;i<k;i++){
    cin >> c >> d;
    c--;
    d--;
    which_dish[i].first=c;
    which_dish[i].second=d;
 }

  int ans=0;
  int sum;
  int index;
  for(int p=0;p<last;p++){
    vector<int> dish(n,0);
    for(int i=0;i<k;i++){
      if(p & (1<<i)){
        index=which_dish[i].first;
        dish[index]++;
      }else{
        index=which_dish[i].second;
        dish[index]++;
      }
    }
    sum=0;
    for(int j=0;j<m;j++){
      a=sel[j].first;
      b=sel[j].second;
      if(dish[a]>=1 && dish[b]>=1)sum++;
    }
    ans=max(ans,sum);
  }

  cout << ans << endl;
}
