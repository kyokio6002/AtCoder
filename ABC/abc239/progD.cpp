#include<bits/stdc++.h>
using namespace std;

int main(){
  map<int,int> mp={{2,1},{3,1},{5,1},{7,1},{11,1},{13,1},{17,1},{19,1},{23,1},{29,1},{31,1},{37,1},{41,1},{43,1},{47,1},{53,1},{59,1},{61,1},{67,1},{71,1},{73,1},{79,1},{83,1},{89,1},{97,1}};

  int a,b;
  int c,d;
  cin >> a >> b >> c >> d;

  for(int i=a;i<=b;i++){
    int flag=0;
    for(int j=c;j<=d;j++){
      if(mp[i+j]>0)flag++;
    }
    if(!flag){
      cout << "Takahashi" << endl;
      return 0;
    }
  }

  cout << "Aoki" << endl;
}
