#include<bits/stdc++.h>
using namespace std;

int main(){

   int n;
   cin >> n;

   map<string,int> mp;
   string s,t;
   int ans=0;

   // cout << "a:" << ('a'-0) << endl;
   // cout << "A:" << ('A'-0) << endl;
   // cout << "A-a:" << ('A'-'a') << endl;
   for(int i=0;i<n;i++){
     cin >> s >> t;
     for(int i=0;i<s.length();i++)s[i]=(s[i]-32);
     //cout << s+t << endl;
     mp[s+t]++;
     if(mp[s+t]>1)ans++;
   }

   if(ans)cout << "Yes" << endl;
   else cout << "No" << endl;
}
