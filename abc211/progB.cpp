#include<bits/stdc++.h>
using namespace std;

int main(){

  vector<string> ss(4);
  for(int i=0;i<4;i++)cin >> ss[i];

  sort(ss.begin(),ss.end());
  if(ss[0]=="2B" && ss[1]=="3B" && ss[2]=="H" && ss[3]=="HR"){
    cout << "Yes" << endl;
    return 0;
  }

  // for(int  i=0;i<4;i++)cout << ss[i] << endl;
  cout << "No" << endl;

}
