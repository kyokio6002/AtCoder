#include<bits/stdc++.h>
using namespace std;

int main(){

  int h,w;
  cin >> h >> w;
  int x1,y1;
  int x2,y2;
  char c;
  int flag=0;
  for(int y=0;y<h;y++){
    for(int x=0;x<w;x++){
      cin >> c;
      if(!flag && c=='o'){
        x1=x;
        y1=y;
        flag++;
      }else if(flag && c=='o'){
        x2=x;
        y2=y;
      }
    }
  }

  cout << abs(x1-x2)+abs(y1-y2) << endl;

}
