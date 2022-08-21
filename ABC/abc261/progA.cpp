#include<bits/stdc++.h>
using namespace std;

int main(){

  int l1,r1;
  int l2,r2;
  cin >> l1 >> r1 >> l2 >> r2;

  vector<int> line(101);
  for(int i=l1;i<=r1;i++)line[i]++;
  for(int i=l2;i<=r2;i++)line[i]++;

  int ans=0;
  for(int i=0;i<=100;i++)if(line[i]>1)ans++;

  cout << max(0,--ans) << endl;
  

}
