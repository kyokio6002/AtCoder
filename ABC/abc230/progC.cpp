#include<bits/stdc++.h>
#include <set>
using namespace std;

using ll=long long;
ll a,b;

bool is_included1(ll x,ll y,ll min_k,ll max_k){
  ll min_y=a+min_k;
  ll max_y=a+max_k;
  ll min_x=b+min_k;
  ll max_x=b+max_k;
  ll flag=0;
  if(x>=min_x && x<=max_x)flag++;
  if(y>=min_y && y<=max_y)flag++;
  if(x-y==b-a)flag++;

  if(flag==3)return true;
  return false;
}

bool is_included2(ll x,ll y,ll min_k,ll max_k){
  ll min_y=a+min_k;
  ll max_y=a+max_k;
  ll min_x=b-min_k;
  ll max_x=b-max_k;
  if(min_x>max_x)swap(min_x,max_x);
  ll flag=0;
  if(x>=min_x && x<=max_x)flag++;
  if(y>=min_y && y<=max_y)flag++;
  if(y+x==a+b)flag++;

  if(flag==3)return true;
  return false;
}

int main(){

  ll n;
  cin >> n >> a >> b;
  ll p,q,r,s;
  cin >> p >> q >> r >> s;

  ll min_k1,max_k1;
  ll min_k2,max_k2;
  min_k1=max(1-a,1-b);
  max_k1=min(n-a,n-b);
  min_k2=max(1-a,b-n);
  max_k2=min(n-a,b-1);

  for(ll y=p;y<=q;y++){
    for(ll x=r;x<=s;x++){
      if(is_included1(x,y,min_k1,max_k1))cout << "#";
      else if(is_included2(x,y,min_k2,max_k2))cout << "#";
      else cout << ".";
    }
    cout << endl;
  }

}
