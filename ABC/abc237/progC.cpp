#include<bits/stdc++.h>
using namespace std;

int main(){

  string s;
  cin >> s;

  int begin=0;
  int end=s.length()-1;
  int begin_c=0;
  int end_c=0;
  int len=s.length();
  // 前から
  for(int i=0;i<len;i++){
    if(s[i]=='a'){
      begin_c++;
      begin++;
      continue;
    }
    break;
  }

  // 後から
  for(int i=0;i<len;i++){
    if(s[len-1-i]=='a'){
      end_c++;
      end--;
      continue;
    }
    break;
  }

  if(begin_c>end_c){
    cout << "No" << endl;
    return 0;
  }

  if(begin_c > len-end_c){
    cout << "No" << endl;
    return 0;
  }
  string sb(s.begin()+begin_c, s.end()-end_c);
  string se(sb.rbegin(),sb.rend());
  cout << sb << endl;
  cout << se << endl;
  if(sb.length()<1){
    cout << "No" << endl;
    return 0;
  }else if(se.length()<1){
    cout << "No" << endl;
    return 0;
  }

  if(sb==se)cout << "Yes" << endl;
  else cout << "No" << endl;
}
