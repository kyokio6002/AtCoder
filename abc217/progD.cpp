#include<bits/stdc++.h>
using namespace std;

int main(){

  int l,q;
  cin >> l >> q;

  vector<int> woods={0,l};

  int c,x;
  for(int i=0;i<q;i++){
    cin >> c >> x;
    if(c==1){
      woods.push_back(x);
    }else{
      sort(woods.begin(),woods.end());
      auto position=lower_bound(woods.begin(),woods.end(),x);
      // cout << "x:" << x << endl;
      // for(int i=0;i<woods.size();i++)cout << woods[i] << ",";
      // cout << endl;
      // cout << "position:" << *position << endl;
      // cout << "end:" << *woods.end() << endl;
      cout << (*position-*(position-1)) << endl;
    }
  }
}
