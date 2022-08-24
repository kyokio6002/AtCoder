#include<bits/stdc++.h>
using namespace std;

bool IsPrime(int num){
  if(num<2)return false;
  else if(num==2)return true;
  else if(num%2==0)return false;

  for(int i=3;i*i<=num;i++){
    if(num%i==0){
      return false;
    }
  }
  return true;
}

int main(){

  int a,b,c,d;
  cin >> a >> b >> c >> d;

  map<int,int> mp;
  for(int i=2;i<200;i++)if(IsPrime(i))mp[i]++;

  for(int taka=a;taka<=b;taka++){
    int flag=0;
    for(int aoki=c;aoki<=d;aoki++){
      if(mp.count(taka+aoki)){
        flag++;
        break;
      }
    }
    if(flag)continue;

    cout << "Takahashi" << endl;
    return 0;
  }

  cout << "Aoki" << endl;
}
