#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){

  vector<string> s(3);
  vector<int> s_len(3);
  for(int i=0;i<3;i++){
    cin >> s[i];
    s_len[i] = s[i].length();
  }

  map<char,int> mp;
  vector<char> top_char(3);
  top_char[0] = s[0][0];
  top_char[1] = s[1][0];
  top_char[2] = s[2][0];
  for(int i=0;i<3;i++){
    for(int j=0;j<s_len[i];j++){
      mp[s[i][j]]++;
    }
  }

  //for(auto a:mp){
  //  cout << a.first << ":" << a.second << endl;
  //}
  if(mp.size()>10){
    cout << "UNSOLVABLE" << endl;
    return 0;
  }
  vector<int> v={0,1,2,3,4,5,6,7,8,9};
  int count = 0;
  do{
    int count = 0;
    for(auto &i:mp){
      i.second = v[count];
      count++;
    }

    //s1
    ll s1=0,s2=0,s3=0;
    ll degit=1;
    for(int i=0;i<s_len[0];i++){
      s1+=mp[s[0][s_len[0]-1-i]]*degit;
      degit*=10;
    }
    //s2
    degit=1;
    for(int i=0;i<s_len[1];i++){
      s2+=mp[s[1][s_len[1]-1-i]]*degit;
      degit*=10;
    }
    //s3
    degit=1;
    for(int i=0;i<s_len[2];i++){
      s3+=mp[s[2][s_len[2]-1-i]]*degit;
      degit*=10;
    }
    // cout << s1 << endl;
    // cout << s2 << endl;
    // cout << s3 << endl;
    // cout << endl;

    if(s1+s2==s3){
      string ss1(to_string(s1));
      string ss2(to_string(s2));
      string ss3(to_string(s3));
      if(s1==0 || s2==0 || s3==0)continue;
      if(ss1.length()!=s_len[0] || ss2.length()!=s_len[1] || ss3.length()!=s_len[2])continue;
      cout << s1 << endl;
      cout << s2 << endl;
      cout << s3 << endl;
      return 0;
    }
  }while(next_permutation(v.begin(), v.end()));

  cout << "UNSOLVABLE" << endl;
}
