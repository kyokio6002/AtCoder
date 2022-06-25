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
vector<ll> ans(200);

void dfs(ll s,int now, int count, vector<int> v){

  // if(count==n){
  //   cout << "route finish" << endl; 
  //   for(int i=0;i<n;i++){
  //     cout << v[i] << "→";
  //   }cout << endl;
  //   for(int i=0;i<n;i++){
  //     printf("ans[%d]:%d\n",i+1,ans[i]);
  //   }
  //   return;
  // }

  for(int next=0;next<n;next++){
    ll len=abs(jump[now].x-jump[next].x)+abs(jump[now].y-jump[next].y);
    // 行ったことあるところはスルー
    if(v[next]!=-1)continue;
    if(next==now)continue;

    if(jump[now].p*s>=len){
      vector<int> nv=v;
      nv[next]=count+1;
      if(ans[next]>s)ans[next]=s;
      dfs(s,next,count+1,nv);
    }else{
      ll need_s=len/jump[now].p;
      if(need_s*jump[now].p<len)need_s++;
      vector<int> nv=v;
      nv[next]=count+1;
      if(ans[next]>need_s)ans[next]=need_s;
      // cout << "next_need_s:" << need_s << endl;
      dfs(need_s,next,count+1,nv);
    }
  }
}


int main(){

  cin >> n;
  for(int i=0;i<n;i++){
    cin >> jump[i].x >> jump[i].y >> jump[i].p;
  }

  ll aans=1000000000000000000;
  for(int i=0;i<n;i++){
    vector<int> v(n,-1);
    vector<ll> reset_ans(n,aans);
    ans=reset_ans;
    ans[i]=0;
    v[i]=1;
    dfs(1,i,1,v);
    ll now_max=0;
    for(int j=0;j<n;j++){
      // printf("ans[%d]:%d\n",i+1,ans[j]);
      now_max=max(now_max,ans[j]);
    }
    aans=min(aans,now_max);
  }

  cout << aans << endl;

}
