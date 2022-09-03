#include<bits/stdc++.h>
using namespace std;

int main(){

  vector<int> row(7);
  string hitted;
  cin >> hitted;
  row[3]+=(hitted[0]-'0');
  row[2]+=(hitted[1]-'0');
  row[4]+=(hitted[2]-'0');
  row[1]+=(hitted[3]-'0');
  row[3]+=(hitted[4]-'0');
  row[5]+=(hitted[5]-'0');
  row[0]+=(hitted[6]-'0');
  row[2]+=(hitted[7]-'0');
  row[4]+=(hitted[8]-'0');
  row[6]+=(hitted[9]-'0');

  if(!(hitted[0]-'0')){
    for(int i=0;i<5;i++){
      bool flag=false;

      if(!row[i])continue;

      for(int j=i+1;j<7;j++){
        if(!row[j] && !flag)flag=true;
        else if(flag && row[j]){
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }

  cout << "No" << endl;

}
