#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){

  int n,m;
  cin >> n >> m;

  vector<string> s(n);
  vector<string> t(m);
  for(int i=0;i<n;i++)cin >> s[i];
  for(int i=0;i<m;i++)cin >> t[i];

  int ans=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      int count=0;
      for(int ii=0;ii<3;ii++){
        if(s[i][3+ii]==t[j][ii])count++;
      }
      if(count==3){
        ans++;
        break;
      }
    }
  }

  cout << ans << endl;
}
