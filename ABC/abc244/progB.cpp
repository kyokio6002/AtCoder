#include <algorithm>
#include<bits/stdc++.h>
#include <string>
using namespace std;

int main(){

   int direct=0;
   vector<pair<int,int>> add{{1,0},{0,-1},{-1,0},{0,1}};

   int n;
   cin >> n;
   string s;
   cin >> s;
   int ans_x=0;
   int ans_y=0;
   for(int i=0;i<n;i++){
     if(s[i]=='R')direct=(direct+1)%4;
     else{
       ans_x+=add[direct].first;
       ans_y+=add[direct].second;
     }
     // cout << "direct:" << direct << endl;
     // cout << "ans_x:" << ans_x << endl;
     // cout << "ans_y:" << ans_y << endl;
     // cout << endl;
   }

   cout << ans_x << " " << ans_y << endl;

}
