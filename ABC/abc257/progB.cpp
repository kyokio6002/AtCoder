#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,k,q;
  cin >> n >> k >> q;

  vector<int> l(q);
  vector<int> masu(n,-1);
  vector<int> koma(k,-1);
  for(int i=0;i<k;i++){
    cin >> koma[i];
    koma[i]--;
    masu[koma[i]] = i;
  }
  for(int i=0;i<q;i++){
    cin >> l[i];
  }

  // for(int i=0;i<n;i++){
  //   cout << masu[i] << " ";
  // }cout << endl;



  for(int i=0;i<q;i++){
    int now_koma=0;
    int count=0;
    for(int j=0;j<n;j++){
      if(masu[j]>=0)count++;
      if(count==l[i]){
        now_koma=j;
        break;
      }
    }
    
    // printf("now%d:%d\n",i,now_koma);
    if(now_koma>=n-1)continue;
    if(masu[now_koma+1]!=-1){
      continue;
    }else{
      masu[now_koma+1]=masu[now_koma];
      koma[masu[now_koma]]+=1;
      masu[now_koma]=-1;
    }
    // for(int j=0;j<n;j++){
    //   cout << masu[j] << ",";
    // }cout << endl;
  }

  for(int i=0;i<k;i++){
    cout << koma[i]+1 << " ";
  }
  cout << endl;

}
