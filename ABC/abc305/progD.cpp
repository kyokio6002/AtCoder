#include <bits/stdc++.h>
#include <utility>
using namespace std;

struct info{
  int type;  // 0:寝るてる, 1:起きてる, 2:観測
  int sum;
};

int main(){

  int n;
  cin >> n;
  map<int,info> mp; // <場所,<type、睡眠時間の合計>>

  bool sleep_flag=false;
  for(int i=0;i<n;i++){
    int x;
    cin >> x;

    if(sleep_flag){
      mp[x].type=1;
      sleep_flag=false;
    }else{
      mp[x].type=0;
      sleep_flag=true;
    }
  }

  int q;
  cin >> q;
  vector<pair<int,int>> ans(q);
  for(int i=0;i<q;i++){
    int x,y;
    cin >> x >> y;
    if(!mp.count(x))mp[x].type=2;
    if(!mp.count(y))mp[y].type=2;

    ans[i]={x,y};
  }


  sleep_flag=false;
  int sleep_sum=0;
  int sleep_start_x=0;
  for(auto point:mp){
    int x=point.first;
    info point_info=point.second;


    if(point_info.type==1){
      // 睡眠開始時間の設定
      sleep_start_x=x;
      // 睡眠時間を計算
      mp[x].sum=sleep_sum;
      // 睡眠flagを立てる
      sleep_flag=true;
    }else if(point_info.type==0){
      // 睡眠時間を計算
      mp[x].sum=sleep_sum+(x-sleep_start_x);
      // 睡眠時間の合計を更新
      sleep_sum=mp[x].sum;
      // 睡眠flagをおろす
      sleep_flag=false;
    }else{
      // 寝ている時
      if(sleep_flag){
        // 睡眠時間を計算
        mp[x].sum=sleep_sum+(x-sleep_start_x);
      }else{
        // 睡眠時間を計算
        mp[x].sum=sleep_sum;
      }
    }
  }


  // for(auto point:mp){
  //   printf("%d(%d),", point.second.sum, point.first);
  // }cout << endl;

  for(int i=0;i<q;i++){
    int start=ans[i].first;
    int end=ans[i].second;
    cout << mp[end].sum-mp[start].sum << endl;
  }
}
