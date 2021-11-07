#include<bits/stdc++.h>
using namespace std;

int main(){

   int n;
   cin >> n;

   map<vector<int>,int> mp;
   for(int i=0;i<n;i++){
     int l;
     cin >> l;
     vector<int> v(l);
     for(int j=0;j<l;j++)cin >> v[j];
     mp[v]++;
   }

   cout << mp.size() << endl;

}
