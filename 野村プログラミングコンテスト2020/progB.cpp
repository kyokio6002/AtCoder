#include<bits/stdc++.h>
using namespace std;

int main(){

  string str;
  cin >> str;
  int len = str.length();

  for(int i=0;i<len;i++){
    if(len==1 && str[0]=='?'){
      str[0]='D';
    }else{
      if(str[i]=='?'){
        if(i==0){
          if(str[i+1]!='P') str[i]='P';
          else str[i]='D';
        }else if(i==(len-1)){
          str[i]='D';
        }else{
          if(str[i-1]=='D' && str[i+1]!='P') str[i]='P';
          else str[i]='D';
        }
      }
    }
  }
  cout << str << endl;
}
