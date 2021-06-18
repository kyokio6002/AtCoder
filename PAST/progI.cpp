#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){

  ll N,time,patern;
  cin >> N >> time;
  vector<ll> gyo(N);//行
  vector<ll> retsu(N);//列
  for(int i=0;i<N;i++){
    gyo[i]=i;
    retsu[i]=i;
  }

  int A,B;
  bool flag=0;
  vector<ll> out;
  for(int t=0;t<time;t++){
    cin >> patern;
    if(flag==1){
      if(patern==1) patern=2;
      else if(patern==2) patern=1;
    }
    if(patern==1){
      cin >> A >> B;A--;B--;
      if(A==B) continue;
      swap(gyo[A],gyo[B]);
    }else if(patern==2){
      cin >> A >> B;A--;B--;
      if(A==B) continue;
      swap(retsu[A],retsu[B]);
    }else if(patern==3){
      if(flag==0) flag=1;
      else flag=0;
    }else if(patern==4){
      cin >> A >> B;A--;B--;
      if(flag==0){
        //cout << row[A]*N+column[B] << endl;
        out.push_back(gyo[A]*N+retsu[B]);
      }else{
        //cout << row[B]*N+column[A] << endl;
        out.push_back(gyo[B]*N+retsu[A]);
      }
    }

  }

  cout << endl;
  for(auto i:out){
    cout << i << endl;
  }

}
