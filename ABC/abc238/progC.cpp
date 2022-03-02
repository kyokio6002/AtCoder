#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){
  
  ll n;
  cin >> n;
  ll mod=998244353;
  ll mod2=499122177;

  int d=0;
  ll t=n;
  for(int i=0;i<19;i++){
    t/=10;
    if(t==0)break;
    d++;
  }
  cout << "^10:" << d << endl;

  ll ans=0;
  ll start;
  ll end;
  ll count;
  ll add;
  ll sub;
  for(int i=0;i<d;i++){
    start=ll(pow(10,i));
    end=ll(pow(10,i+1)-1);
    count=end-(start-1);

    //add=count*((start+end)%mod)%mod*mod2%mod;
    //sub=count*(start-1)%mod;
    add=(count%mod)*((start%mod+end%mod)%mod)%mod*mod2%mod;
    sub=(count%mod)*((start-1)%mod)%mod;

    ans=(ans+add%mod)%mod;
    ans=(ans-sub%mod+mod)%mod;
    ans=(ans+mod)%mod;

    cout << "count:" << count << endl;
    cout << "start:" << start << endl;
    cout << "end:  " << end << endl;
    cout << "add:  " << add << endl;
    cout << "sub:  " << sub << endl;
    cout << "ans:  " << ans << endl << endl;
  }
  start=ll(pow(10,d));
  end=n;
  count=end-(start-1);

  //add=count*((start+end)%mod)%mod*mod2%mod;
  //sub=count*(start-1)%mod;
  add=(count%mod)*((start%mod+end%mod)%mod)%mod*mod2%mod;
  sub=(count%mod)*((start-1)%mod)%mod;

  ans=(ans+add)%mod;
  ans=(ans-sub)%mod;
  ans=(ans+mod)%mod;

  cout << "count:" << count << endl;
  cout << "start:" << start << endl;
  cout << "end:  " << end << endl;
  cout << "add:  " << add << endl;
  cout << "sub:  " << sub << endl;
  cout << "ans:  " << ans << endl << endl;

  cout << (ans+mod)%mod << endl;
}
