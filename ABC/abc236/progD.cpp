#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;

  map<int,int> mp;
  for(int i=0;i<2*n-1;i++){
    for(int j=i+1;j<2*n;j++){
      cin >> mp[i*10+j];
    }
  }

  // for(int i=0;i<2*n-1;i++){
  //   for(int j=i+1;j<2*n;j++){
  //     cout <<  mp[i*10+j] << ",";
  //   }cout << endl;
  // }

  vector<int> pat;
  for(int i=0;i<n;i++){
    pat.push_back(i);
    pat.push_back(i);
  }

  int ans=0;
  do{
    // debag
    // for(int i=0;i<pat.size();i++)cout << pat[i] << ",";
    // cout << endl;

    int now=0;
    for(int i=0;i<n;i++){
      vector<int> pair;
      for(int j=0;j<2*n;j++){
        if(pat[j]==i)pair.push_back(j);
      }
      int target;
      if(pair[0]>pair[1])target=pair[1]*10+pair[0];
      else target=pair[0]*10+pair[1];
      // cout << "target:" << target << endl;
      now^=mp[target];
      // cout << "mp:" << mp[target] << endl;
    }
    ans=max(ans,now);

    // debag
    // cout << "now:" << now << endl;
    // cout << "ans:" << ans << endl;

  }while(next_permutation(pat.begin(),pat.end()));

  cout << ans << endl;
}
