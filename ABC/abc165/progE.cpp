#include<bits/stdc++.h>
using namespace std;

int main(){

  int N,M;
  cin >> N >> M;

  int start1;
  int start2;


  //偶数の時
  if(N%2==0){
    start1 = 1;
    start2 = N-1;
    bool flag = 0;
    for(int i=1;i<=M;i++){
      if(flag==0 && start2-start1<=N/2){
        start1++;
        flag = 1;
      }
      cout << start1 << " " << start2 << endl;
      start1++;
      start2--;
    }
  }else{
    start1 = 1;
    start2 = N-1;
    for(int i=1;i<=M;i++){
      cout << start1 << " " << start2 << endl;
      start1++;
      start2--;
    }
  }

}
