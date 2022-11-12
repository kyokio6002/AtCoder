#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;

  vector<char> aa={'H', 'D', 'C', 'S'};
  vector<char> bb={'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};
  map<pair<char,char>,int> mp;

  char a, b;
  for(int i=0;i<n;i++){
    cin >> a >> b;
    bool flag1=false;
    bool flag2=false;
    pair<char,char> p={a,b};

    for(int ai=0;ai<aa.size();ai++){
      if(aa[ai]==a)flag1=true;
    }
    for(int bi=0;bi<bb.size();bi++){
      if(bb[bi]==b)flag2=true;
    }

    if(!flag1 || !flag2 || mp.count(p)){
      cout << "No" << endl;
      return 0;
    }
    mp[p]++;
    
  }

  cout << "Yes" << endl;
}
