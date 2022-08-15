#include<bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

  int n,q;
  cin >> n >> q;
  map<int,int> mp;
  vector<int> ball_to_index(n+1);
  vector<int> index_to_ball(n+1);

  for(int i=1;i<=n;i++){
    ball_to_index[i]=i;
    index_to_ball[i]=i;
  }

  int ball;
  int tmp;
  for(int i=0;i<q;i++){
    cin >> ball;
    if(ball_to_index[ball]==n){
      int now_index = ball_to_index[ball];
      int next_index = now_index-1;
      int now_ball = ball;
      int next_ball = index_to_ball[next_index];

      // indexの交換
      ball_to_index[now_ball]-=1;
      ball_to_index[next_ball]+=1;

      // ballの交換
      tmp=index_to_ball[now_index];
      index_to_ball[now_index]=index_to_ball[next_index];
      index_to_ball[next_index]=tmp;
    }else{
      int now_index = ball_to_index[ball];
      int next_index = now_index+1;
      int now_ball = ball;
      int next_ball = index_to_ball[next_index];

      // indexの交換
      ball_to_index[now_ball]+=1;
      ball_to_index[next_ball]-=1;

      // ballの交換
      tmp=index_to_ball[now_index];
      index_to_ball[now_index]=index_to_ball[next_index];
      index_to_ball[next_index]=tmp;
    }
    // for(int j=1;j<=n;j++)cout << index_to_ball[j] << " ";
    // cout << endl;
  }

  for(int i=1;i<=n;i++)cout << index_to_ball[i] << " ";
  cout << endl;
  // for(int i=1;i<=n;i++)cout << ball_to_index[i] << " ";
  // cout << endl;
}
