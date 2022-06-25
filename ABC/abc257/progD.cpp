#include<bits/stdc++.h>
using namespace std;

struct jump{
  int x;
  int y;
  int p;
};
using ll=long long;
int n;
vector<jump> jump(200);  // ((x,y),p)
ll ans=1000000000000000000;

void dfs(ll s,int now, int count, vector<int> v){

  // cout << "now:" << now << endl;
  // cout << "count:" << count << endl;
  // cout << "s:" << s << endl;

  if(count==n){
    ans=min(ans,s);
    cout << "route finish" << endl; 
    for(int i=0;i<n;i++){
      cout << v[i] << "→";
    }cout << endl;
    cout << "s:" << s << endl;
    return;
  }

  for(int next=0;next<n;next++){
    ll len=abs(jump[now].x=jump[next].x)+abs(jump[now].y-jump[next].y);
    // 行ったことあるところはスルー
    if(v[next]!=-1)continue;
    if(next==now)continue;

    if(jump[now].p*s>=len){
      vector<int> nv=v;
      nv[next]=count+1;
      dfs(s,next,count+1,nv);
    }else{
      ll need_s=len/jump[now].p;
      if(need_s*jump[now].p<len)need_s++;
      vector<int> nv=v;
      nv[next]=count+1;
      dfs(need_s,next,count+1,nv);
    }
  }
}


int main(){

  cin >> n;
  for(int i=0;i<n;i++){
    cin >> jump[i].x >> jump[i].y >> jump[i].p;
  }

  for(int i=0;i<n;i++){
    vector<int> v(n,-1);
    v[i]=1;
    dfs(0,i,1,v);
  }

  cout << ans << endl;

}
