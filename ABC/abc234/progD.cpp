#include<bits/stdc++.h>
using namespace std;


int main(){

  int n,k;
  cin >> n >> k;

  vector<int> p(n);
  for(int i=0;i<n;i++)cin >> p[i];
  priority_queue<int,vector<int>,greater<int>> que;
  for(int i=0;i<k;i++)que.push(p[i]);
  cout << que.top() << endl;
  
  for(int i=k;i<n;i++){
    if(que.top()<p[i]){
      que.pop();
      que.push(p[i]);
    }
    cout << que.top() << endl;
  }

}
