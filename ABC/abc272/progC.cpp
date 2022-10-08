#include<bits/stdc++.h>
#include <vector>
using namespace std;

int main(){

  int n;
  cin >> n;
  vector<int> kisu;
  vector<int> gusu;
  for(int i=0;i<n;i++){
    int a;
    cin >> a;
    if(a%2)gusu.push_back(a);
    else kisu.push_back(a);
  }

  sort(gusu.rbegin(),gusu.rend());
  sort(kisu.rbegin(),kisu.rend());

  int ans=-1;
  // gu gu
  if(gusu.size()>=2){
    ans=max(ans, gusu[0]+gusu[1]);
  }
  // ki ki
  if(kisu.size()>=2){
    ans=max(ans,kisu[0]+kisu[1]);
  }

  cout << ans << endl;

}
