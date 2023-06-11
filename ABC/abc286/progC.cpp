#include <iostream>
#include <unordered_map>
using namespace std;

int main(){

  int n;
  long long a,b;
  cin >> n >> a >> b;
  string s;
  cin >> s;
  long long ans=s.length()*a+s.length()*b;

  for(int shift=0;shift<=s.length();shift++){
    char c=s[s.length()-1];
    string ss=s;
    if(shift!=0)s=ss.substr(1,s.length()-1)+ss[0];
    
    int error_count=0;
    for(int i=0;i<s.length()/2;i++){
      if(s[i]!=s[s.length()-1-i])error_count++;
    }

    ans=min(ans,shift*a+error_count*b);

    // cout << "s:" <<  s << endl;
    // cout << "shift:" << shift << endl;
    // cout << "error_count:" << error_count << endl;
    // cout << "cost:" << shift*a+error_count*b << endl;
    // cout << "ans:" << ans << endl << endl;
  }

  cout << ans << endl;
}
