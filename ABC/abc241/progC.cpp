#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int n;
  cin >> n;
  vector<vector<char>> s(n,vector<char>(n));

  char c;
  for(int y=0;y<n;y++){
    for(int x=0;x<n;x++){
      cin >> c;
      s[y][x]=c;
    }
  }

  int ans=0;
  // 縦
  for(int y=0;y<n-5;y++){
    for(int x=0;x<n;x++){
      int count=0;
      for(int add=0;add<6;add++){
        if(s[y+add][x]=='#')count++;
      }
      if(count>=4)ans++;
    }
  }

  // 横
  for(int y=0;y<n;y++){
    for(int x=0;x<n-5;x++){
      int count=0;
      for(int add=0;add<6;add++){
        if(s[y][x+add]=='#')count++;
      }
      if(count>=4)ans++;
    }
  }

  // 斜め
  for(int y=0;y<n-5;y++){
    for(int x=0;x<n-5;x++){
      int count=0;
      for(int add=0;add<6;add++){
        if(s[y+add][x+add]=='#')count++;
      }
      if(count>=4)ans++;
    }
  }
  // 斜め
  for(int y=0;y<n-5;y++){
    for(int x=5;x<n;x++){
      int count=0;
      for(int add=0;add<6;add++){
        if(s[y+add][x-add]=='#')count++;
      }
      if(count>=4)ans++;
    }
  }


  if(ans)cout << "Yes" << endl;
  else cout << "No" << endl;
}
