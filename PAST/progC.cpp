#include<bits/stdc++.h>
using namespace std;

int main(){

  long long a,r,n;
  cin >> a >> r >> n;
  long long sum=a;

  for(int i=0;i<n-1;i++){
    sum = sum*r;
    if(sum>1000000000)break;
  }

  if(sum>1000000000){
    cout << "large" << endl;
  }else{
    cout << sum << endl;
  }
}
