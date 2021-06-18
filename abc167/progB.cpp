#include<bits/stdc++.h>
using namespace std;

int main(){

  int a,b,c,k;

  cin >> a >> b >> c >> k;

  int sum = 0;

  for(int i=0;i<k;i++){
    if(a>0){
      a--;
      sum+=1;
    }else if(b>0){
      b--;
      sum=sum;
    }else{
      c--;
      sum-=1;
    }
  }

  cout << sum << endl;

}
