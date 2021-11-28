#include<bits/stdc++.h>
using namespace std;

int main(){

  string s;
  int k;
  cin >> s >> k;

  vector<int> neg;
  int dots=0;
  int len=s.length();
  int flag=(s[0]=='X')?1:0;
  int count=0;
  vector<int> a;
  // cout << "flag:" << flag << endl;
  int zeromax=0;
  for(int i=0;i<len;i++){
    if(s[i]=='X'){
      if(flag){
        count++;
      }else{
        count=1;
        flag=1;
      }
      if(i==len-1){
        a.push_back(count);
        zeromax=max(zeromax,count);
      }
    }else{
      dots++;
      if(flag){
        a.push_back(count);
        flag=0;
        zeromax=max(zeromax,count);
      }
      a.push_back(-1);
      neg.push_back(a.size()-1);
    }
  }

  if(k==0 && dots!=0){
    cout << zeromax << endl;
    return 0;
  }else if(dots<=k){
    cout << s.length() << endl;
    return 0;
  }

  // for(int i=0;i<a.size();i++)cout << a[i] << ",";
  // cout << endl;
  // for(int i=0;i<neg.size();i++)cout << neg[i] << ",";
  // cout << endl;

  vector<int> dp(a.size()+1);
  int ans=0;
  int negsum=0;
  int negindex=0;
  flag=0;
  if(a[0]<0)negsum++;
  dp[0]=abs(a[0]);

  for(int i=1;i<a.size();i++){
    dp[i]=dp[i-1]+abs(a[i]);
    // negの個数をカウント
    if(a[i]<0)negsum++;

    if(negsum>k){
      if(a[i]<0){
        if(!flag)flag++;
        else negindex++;
        int now=dp[i]-dp[neg[negindex]];
        ans=max(ans,now);
        // cout << "negindex:" << neg[negindex] << endl;
        // printf("ans1:%d(now;%d)(negsum:%d)\n",ans,now,negsum);
      }else{
        int now=dp[i]-dp[neg[negindex]];
        ans=max(ans,now);
        // printf("ans2:%d(now;%d)(negsum:%d)\n",ans,now,negsum);
      }
    }else{
      ans=dp[i];
      // printf("ans3:%d(now;%d)(negsum:%d)\n",ans,dp[i],negsum);
    }
  }

  cout << ans << endl;
}
