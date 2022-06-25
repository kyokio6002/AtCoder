#include<bits/stdc++.h>
using namespace std;

int main(){

   int n;
   string s;
   cin >> n;
   cin >> s;
   map<int,vector<int>> w;
   int t;
   int min_w=1000000001;
   for(int i=0;i<n;i++){
     cin >> t;
     w[t].push_back(i);
     min_w=min(min_w,t);
   }

   int ans=0;
   for(int i=0;i<n;i++){
     if(s[i]=='1')ans++;
   }
   int inst_ans=0;
   inst_ans=ans;

   for(auto v:w){
     int add=0;
     // int weight=v.first;
     vector<int> a=v.second;

     // 更新
     for(int i=0;i<a.size();i++){
       if(s[a[i]]=='0')add++;
       else if(s[a[i]]=='1')add--;
     }
     inst_ans+=add;
     ans=max(ans,inst_ans);
   }

   cout << ans << endl;

}
