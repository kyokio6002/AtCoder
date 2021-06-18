#include<bits/stdc++.h>
using namespace std;

int main(){

  string S;
  cin >> S;
  long long len = S.length();

  cout << len << endl;

  long long count = 0;

  vector<long long> mod(2019,0);

  long long nowNum = 0;
  long long digit = 1;
  long long nowMod = nowNum%2019;
  mod[nowMod]++;

  cout << nowNum << ":" << nowNum%2019 << endl << endl;

  for(long long i=len-1;i>=0;i--){
    nowNum = (nowNum + (S[i]-'0')*digit)%2019;
    digit = (digit*10)%2019;
    cout << nowNum << ":" << nowNum%2019 << endl;
    mod[nowNum%2019]++;
    cout << i << " " << " " << mod[nowNum%2019] << endl;
  }

  for(long long i=0;i<2019;i++){
    if(mod[i] <= 0) continue;
    else{
      count += mod[i]*(mod[i]-1)/2;
      cout << "i:" << i << endl << "mod[i]:" << mod[i] << endl;
    }
  }

  cout << count << endl;
}
