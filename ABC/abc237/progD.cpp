#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  vector<int> a;
  a.push_back(0);
  int itr=0;

  for(int i=0;i<n;i++){
    char c;
    cin >> c;
    if(c=='L'){
      if(itr==0){
        reverse(a.begin(),a.end());
        a.push_back(i+1);
        reverse(a.begin(),a.end());
        continue;
      }
      a.insert(a.begin()+itr,i+1);
    }else{
      a.insert(a.begin()+itr+1,i+1);
      itr+=1;
    }
  }

  for(int i=0;i<=n;i++){
    cout << a[i] << ' ';
  }cout << endl;

}
