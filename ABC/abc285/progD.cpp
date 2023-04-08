#include <bits/stdc++.h>
using namespace std;

int main(){

   int n;
   cin >> n;
   map<string,string> s_t;
   map<string,int> error;  // 変更先の重複
   for(int i=0;i<n;i++){
     string s1,s2;
     cin >> s1 >> s2;
     if(error.count(s2)){
       cout << "No" << endl;
       return 0;
     }
     error[s2]++;
     s_t[s1]=s2;
   }

   map<string, int> dist;

   for(auto [from, to]: s_t){
     // cout << "from:" << from << endl;
     // cout << "to:" << to << endl;

     if(dist.count(from))continue;
     
     dist[to]++;

     if(!s_t.count(to))continue;

     string next_from=from;
     string next_to=to;
     while(true){
       next_from=next_to;
       next_to=s_t[next_from];
       // cout << "next_from:" << next_from << endl;
       // cout << "next_to:" << next_to << endl;

       if(dist.count(next_to)){
         cout << "No" << endl;
         return 0;
       }
       dist[next_to]++;
       if(!s_t.count(next_to))break;
     }
   }

   cout << "Yes" << endl;
}
