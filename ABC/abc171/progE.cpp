#include<bits/stdc++.h>
using namespace std;

int main(){

  int N;
  cin >> N;

  vector<int> a(N);
  for(int i=0;i<N;i++) cin >> a[i];

  int sum_XOR=0;
  for(int i=0;i<N;i++){
    sum_XOR=sum_XOR^a[i];
  }

  int ans;
  for(int i=0;i<N;i++){
    ans=sum_XOR^a[i];
    cout << ans << endl;
  }
}
