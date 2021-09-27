#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,x;
  cin >> n >> x;
  vector<int> v;
  int a;
  int num=0;
  for(int i=0;i<n;i++){
    cin >> a;
    if(a==x)continue;

    v.push_back(a);
    num++;
  }

  if(v.size()==0){
    cout << endl;
    return 0;
  }
  for(int i=0;i<num;i++){
    cout << v[i] << " ";
  }

}

