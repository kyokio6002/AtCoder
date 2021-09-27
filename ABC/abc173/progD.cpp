#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){

  int n;
  cin >> n;
  ll ans = 0;

  priority_queue<int> que;
  ll a;
  for(int i=0;i<n;i++){
    cin >> a;
    que.push(a);
  }

  queue<int> points;
  a=que.top();
  que.pop();
  points.push(a);
  while(!que.empty()){
    a=que.top();
    que.pop();
    points.push(a);
    points.push(a);
    ans+=points.front();
    points.pop();
    //cout << ans << endl;
  }

  cout << ans << endl;
}
