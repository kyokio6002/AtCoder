#include<bits/stdc++.h>
using namespace std;

int main(){

  string s;
  cin >> s;
  int k;
  cin >> k;

  vector<int> a;
  int flag=0;
  if(s[0]=='X')flag=1;
  int count=0;
  int dot=0;
  vector<int> neg;
  for(int i=0;i<s.length();i++){
    if(s[i]=='X'){
      if(i==s.length()-1){
        a.push_back(count+1);
        break;
      }
      if(flag)count++;
      else{
        flag=1;
        count=1;
      }
    }else{
      dot++;
      if(flag){
        a.push_back(count);
        count=1;
        flag=0;
      }
      a.push_back(-1);
      neg.push_back(a.size()-1);
    } 
  }

  if(dot<=k){
    cout << s.length() << endl;
    return 0;
  }

  // for(int i=0;i<a.size();i++)cout << a[i] << ",";
  // cout << endl;
  // for(int i=0;i<neg.size();i++)cout << neg[i] << ",";
  // cout << endl;

  vector<int> dp(a.size());
  dp[0]=abs(a[0]);
  int negsum=0;
  int ans=abs(a[0]);
  if(a[0]==-1)negsum=1;

  for(int i=0;i<a.size()-1;i++){
    dp[i+1]=dp[i]+abs(a[i+1]);

    if(a[i+1]<0)negsum++;

    if(negsum>k){
      if(a[i+1]<0){
        ans=max(ans,dp[i+1]-dp[neg[0]]);
        neg.erase(neg.begin());
        cout << "ans:" << ans << endl;
      }else{
        ans=max(ans,dp[i+1]-dp[neg[0]]+abs(a[i+1]));
        cout << "ans:" << ans << endl;
      }
    }else{
      ans+=abs(a[i+1]);
      cout << "ans:" << ans << endl;
    }
  }

  cout << ans << endl;

}
