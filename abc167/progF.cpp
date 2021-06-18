#include<bits/stdc++.h>
using namespace std;


using p=pair<int,int>;
using ll=long long;

int main(){

  int n;
  cin >> n;
  string str;

  int m;
  int e;

  priority_queue<p,vector<p>,less<p>> upque;//(m.e)
  priority_queue<p,vector<p>,less<p>> downque;//(m,e)

  for(int i=0;i<n;i++){
    cin >> str;
    m=e=0;
    for(int j=0;j<str.length();j++){
      if(str[j]=='('){
        e++;
      }else{
        e--;
        m=min(e,m);
      }
    }

    if(e>0){
      upque.push(make_pair(m,e));
    }else{
      downque.push(make_pair(m-e,-e));
    }
  }

  ll sum=0;
  bool flag = 1;
  p tmp;
  while(!upque.empty()){
    tmp = upque.top();
    upque.pop();

    if(sum+tmp.first<0){
      flag=0;
      break;
    }
    sum+=tmp.second;
  }
  ll nsum=0;
  while(!downque.empty()){
    if(flag==0) break;

    tmp=downque.top();
    downque.pop();

    if(sum+tmp.first<0){
      flag=0;
      break;
    }else{
      nsum+=tmp.second;
    }
  }

  if(flag==1 && sum-nsum==0) cout << "Yes" << endl;
  else cout << "No" << endl;
}
