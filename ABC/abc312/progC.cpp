#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){

  int n,m;
  cin >> n >> m;
  vector<int> uru(n);
  vector<int> kau(m);
  bool debug=true;

  for(int i=0;i<n;i++)cin >> uru[i];
  for(int i=0;i<m;i++)cin >> kau[i];
  for(int i=0;i<n;i++)uru[i]=-uru[i];
  for(int i=0;i<m;i++)kau[i]=-kau[i];

  sort(uru.rbegin(),uru.rend());
  sort(kau.begin(),kau.end());
  if(debug){
    for(int i=0;i<(int)kau.size();i++)cout << kau[i] << " ";cout << endl;
    for(int i=0;i<(int)uru.size();i++)cout << uru[i] << " ";cout << endl;
  }

  int ans=-1;
  for(int i=0;i<(int)uru.size();i++){
    if(i!=(int)uru.size()-1){
      if(uru[i+1]==uru[i])continue;
    }
    int it=upper_bound(kau.begin(), kau.end(),uru[i])-kau.begin();
    for(int tt=it;tt<kau.size()-1;tt++){
      if(kau[tt]==kau[tt+1])tt++;
      else break;
    }
    if(debug){
      cout << "uru[]:" << uru[i] << endl;
      cout << "kau:" << it << endl;
      cout << "uru:" << i+1 << endl;
      cout << endl;
    }
    if(i+1<=it){
      ans=max(ans,-uru[i]);
    }
  }

  if(ans==-1){
    cout << -kau[0]+1 << endl;
  }else{
    cout << ans << endl;
  }
  
}
