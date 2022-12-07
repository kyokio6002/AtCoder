#include <bits/stdc++.h>
using namespace std;

int main(){

  int h,w;
  cin >> h >> w;

  int ans=0;
  char c;
  for(int y=0;y<h;y++){
    for(int x=0;x<w;x++){
      cin >> c;
      if(c=='#')ans++;
    }
  }

  cout << ans << endl;
}
