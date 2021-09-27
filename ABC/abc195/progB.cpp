#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int a,b,w;
  cin >> a >> b >> w;
  w*=1000;

  int min_ans=w/b;
  if(w%b!=0)min_ans++;
  int max_ans=w/a;

  if(a>w || b>w || (b*max_ans<w && w/a==w/b)){
    cout << "UNSATISFIABLE" << endl;
    return 0;
  }

  cout << min_ans << " " << max_ans << endl;
}
