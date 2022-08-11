#include<bits/stdc++.h>
using namespace std;

using ll=long long;
typedef struct Boll{
  ll score;
  ll count;
}boll;

int main(){
  
  int n;
  cin >> n;

  vector<boll> tsutsu;

  int q;
  ll x,c;
  int cursor=0;
  for(int i=0;i<n;i++){
    cin >> q;
    boll b;
    if(q==1){
      cin >> x >> c;
      b.score=x;
      b.count=c;
      tsutsu.emplace_back(b);
    }else{
      cin >> c;
      ll cc=c;
      ll sum=0;
      while(cc){
        if(tsutsu[cursor].count>=cc){
          sum+=tsutsu[cursor].score*cc;
          tsutsu[cursor].count-=cc;
          cc=0;
        }else{
          sum+=tsutsu[cursor].score*tsutsu[cursor].count;
          cc-=tsutsu[cursor].count;
          cursor++;
        }
      }
      cout << sum << endl;
    }
  }
}
