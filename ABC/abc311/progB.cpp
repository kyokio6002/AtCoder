#include <iostream>
#include <vector>
using namespace std;

int main(){

  int n;
  cin >> n;
  int d;
  cin >> d;
  vector<string> s(n);
  for(int i=0;i<n;i++)cin >> s[i];

  int ans=0;
  int count=0;
  for(int t=0;t<d;t++){
    bool flag=true;
    for(int i=0;i<n;i++){
      if(s[i][t]=='x')flag=false;
    }
    if(flag){
      count++;
    }else{
      count=0;
    }
    ans=max(ans,count);
  }

  cout << ans << endl;

}
