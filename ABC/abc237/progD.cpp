#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;

  list<int> ans(1,0);
  auto itr=ans.begin();
  for(int i=0;i<n;i++){
    char c;
    cin >> c;
    if(c=='L'){
      itr=ans.insert(itr,i+1);
    }else{
      itr++;
      itr=ans.insert(itr,i+1);
    }
    // for(auto c:ans)cout << c << " ";
    // cout << endl;
  }

  for(auto c:ans)cout << c << " ";
  cout << endl;

}
