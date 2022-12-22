#include <bits/stdc++.h>
using namespace std;

int main(){

  long long n,t;
  cin >> n >> t;

  long long sum=0;
  vector<long long> a(n);
  vector<long long> sum_n(n);
  for(int i=0;i<n;i++){
    cin >> a[i];
    sum+=a[i];
    sum_n[i]=sum;
  }

  t=t%sum;
  for(int i=0;i<n;i++){
    if(t<sum_n[i]){
      if(i!=0)t-=sum_n[i-1];
      cout << i+1 << " " << t << endl;
      return 0;
    }
  }

}
