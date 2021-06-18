#include<bits/stdc++.h>
using namespace std;

using ll=long long;


void setPOS(ll& aPOS,ll& bPOS){
  ll tmp;
  if(aPOS<0 && bPOS<0){
    if(abs(aPOS)<abs(bPOS)){
      tmp=abs(bPOS);
      aPOS+=tmp;
      bPOS+=tmp;
    }else{
      tmp=abs(aPOS);
      aPOS+=tmp;
      bPOS+=tmp;
    }
  }else if(aPOS<0 && bPOS>=0){
    tmp=abs(aPOS);
    aPOS+=tmp;
    bPOS+=tmp;
  }else if(bPOS<0 && aPOS>=0){
    tmp=abs(bPOS);
    aPOS+=tmp;
    bPOS+=tmp;
  }
}

int main(){

  ll v,w;
  ll aPOS,bPOS;
  cin >> aPOS >> v;
  cin >> bPOS >> w;
  ll t ;
  cin >>t;

  setPOS(aPOS,bPOS);
  cout << aPOS << bPOS;



  for(int i=0;i<t;i++){
    if(aPOS>bPOS){
      aPOS-=v;
      bPOS-=w;
    }else if(aPOS<bPOS){
      aPOS+=v;
      bPOS+=w;
    }
    if(aPOS==bPOS){
      cout << "YES" << endl;
      return 0;
    }
    //setPOS(aPOS,bPOS);

  }

  cout << "NO" << endl;

}
