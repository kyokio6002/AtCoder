#include<bits/stdc++.h>
using namespace std;

using ll=long long;
int main(){
  
  int debag=0;

  ll n,k,x;
  cin >> n >> k >> x;

  vector<ll> a(n);
  for(int i=0;i<n;i++)cin >> a[i];
  sort(a.rbegin(),a.rend());

  ll use_num;
  ll ans=0;
  for(int i=0;i<n;i++){
    use_num=a[i]/x;
    use_num=min(use_num,k);
    a[i]-=use_num*x;
    k-=use_num;
    if(debag){
      cout << "use_num:" << use_num << endl;
      cout << "a[]:" << a[i] << endl;
    }
  }


  if(k){
    sort(a.rbegin(),a.rend());
    for(int i=0;i<n;i++){
      a[i]=0;
      k--;
      if(k<=0)break;
    }
  }

  for(int i=0;i<n;i++)ans+=a[i];

  cout << ans << endl;
  
}
