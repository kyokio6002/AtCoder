#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> same_indx(n);
  int count=0;
  for(int i=0;i<n;i++){
    cin >> a[i];
    a[i]--;
    if(a[i]==i)count++;
    same_indx[i]=count;
  }

  long long ans=0;
  for(int j=1;j<n;j++){
    // cout << j << ":";
    if(a[j]==j){
      ans+=(long long)same_indx[j-1];
      // cout << "add01:" << same_indx[j-1] << endl;
    }else if(a[a[j]]==j && a[j]<j){
      ans++;
      // cout << "add02:" << 1 << endl;
    }else{
      // cout << endl;
    }
  }
  cout << ans << endl;
}
