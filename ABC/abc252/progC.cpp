#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;

  vector<vector<int>> s(n,vector<int>(10));
  char c;
  for(int i=0;i<n;i++){
    for(int j=0;j<10;j++){
      cin >> c;
      s[i][j]=c-'0';
    }
  }

  int ans_time=1000000000;
  for(int goalnum=0;goalnum<10;goalnum++){
    vector<int> selected(n);
    int time_to_goalnum=1000000000;
    int time=0;

    // 全てgoalnumになるまで繰り返す
    for(int _=0;_<n;_++){
      int min_time_to_goalnum=1000000000;
      int min_index_to_goalnum;

      // time時点でgoalnumへの最短を探す
      for(int i=0;i<n;i++){
        // 選択済みをパス
        if(selected[i])continue;


        for(int addtime=1;addtime<=10;addtime++){
          if(s[i][(time+addtime)%10]==goalnum){
            if(min_time_to_goalnum>addtime){
              min_time_to_goalnum=addtime;
              min_index_to_goalnum=i;
            }
          }
        }
        if(_==0){
          for(int addtime=0;addtime<10;addtime++){
            if(s[i][(time+addtime)%10]==goalnum){
              if(min_time_to_goalnum>addtime){
                min_time_to_goalnum=addtime;
                min_index_to_goalnum=i;
              }
            }
          }
        }
      }

      selected[min_index_to_goalnum]++;
      time+=min_time_to_goalnum;
    }
    ans_time=min(ans_time,time);
  }

  cout << ans_time << endl;

}
