#include<bits/stdc++.h>
#include <list>
using namespace std;

int main(){

  int n,q;
  cin >> n >> q;

  string s;
  cin >> s;
  // cout << s << endl;

  int index=0;
  for(int i=0;i<q;i++){
    int t,x;
    cin >> t >> x;
    if(t==1){
      index=(index-x+n)%n;
    }else{
      x--;
      cout << s[(index+x)%n] << endl;
    }

    // for(int i=0;i<n;i++)cout << s[(index+i)%n];
    // cout << endl;
  }
  
}
