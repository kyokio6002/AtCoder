#include<bits/stdc++.h>
using namespace std;

int main(){

  long long MAX_N = 200002;
  long long n;
  long long k;
  cin >> n >> k;

  vector<pair<long long,long long>> count(MAX_N,pair<int,int>(0,0));
  vector<long long> move(n);
  for(long long i=0;i<n;i++){
    long long to;
    cin >> to;to--;
    move[i] = to;
  }

  bool flag = 0;//サイクルに入ったら旗をあげる
  long long repCount = 0;//リープ一周の移動数
  long long countToStsrt = 0;//ループが始まるまでの移動回数

  int now=0;
  while(k>0){
    cout << "k:" << k << " now:" << now+1 << "→" << move[now]+1 << endl;
    count[now].first++;
    if(count[now].first==1)count[now].second = k;
    if(count[now].first==2 && flag==0){
      cout << "入った" << endl;
      flag=1;//2回目にきた時flagを立てる
      cout << count[now].second << " " << k << endl;
      repCount=count[now].second - k;
      k = k%repCount;
      cout << "repCount:" << repCount << " k:" << k << endl;
      for(int i=0;i<k;i++){
        now=move[now];
      }
      cout << now+1 << endl;
      break;
    }


    k--;//移動回数を減らす
    now=move[now];
    if(k==0)cout << now+1 << endl;
  }

}
