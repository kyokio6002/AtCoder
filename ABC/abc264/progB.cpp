#include<bits/stdc++.h>
using namespace std;

int main(){

  int y,x;
  cin >> y >> x;
  vector<vector<int>> mp(15,vector<int>(15));

  for(int i=0;i<15;i++)mp[0][i]++;
  for(int i=0;i<15;i++)mp[14][i]++;
  for(int i=0;i<15;i++)mp[i][0]++;
  for(int i=0;i<15;i++)mp[i][14]++;

  for(int i=2;i<=12;i++)mp[i][2]++;
  for(int i=2;i<=12;i++)mp[i][12]++;
  for(int i=2;i<=12;i++)mp[2][i]++;
  for(int i=2;i<=12;i++)mp[12][i]++;

  for(int i=4;i<=10;i++)mp[i][4]++;
  for(int i=4;i<=10;i++)mp[i][10]++;
  for(int i=4;i<=10;i++)mp[4][i]++;
  for(int i=4;i<=10;i++)mp[10][i]++;


  for(int i=6;i<=8;i++)mp[i][6]++;
  for(int i=6;i<=8;i++)mp[i][8]++;
  for(int i=6;i<=8;i++)mp[6][i]++;
  for(int i=6;i<=8;i++)mp[8][i]++;

  // for(int y=0;y<15;y++){
  //   for(int x=0;x<15;x++){
  //     cout << min(mp[x][y],1);
  //   }cout << endl;
  // }

  if(mp[y-1][x-1])cout << "black" << endl;
  else cout << "white" << endl;

}
