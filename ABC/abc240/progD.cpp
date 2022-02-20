#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  stack<pair<int,int>> st;
  
  int t;
  int ans=0;
  for(int i=0;i<n;i++){
    cin >> t;
    if(!st.empty()){
      if(st.top().first==t){
        st.top().second++;
        ans++;
        if(st.top().second==t){
          ans-=st.top().second;
          st.pop();
        }
      }else{
        st.push(make_pair(t,1));
        ans++;
      }
    }else{
      st.push(make_pair(t,1));
      ans=1;
    }
    cout << ans << endl;
  }


}
