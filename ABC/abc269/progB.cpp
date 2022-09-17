#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main(){

  int minx=1000,miny=1000;
  int maxx=-1,maxy=-1;
  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      char c;
      cin >> c;
      if(c=='#'){
        minx=min(minx,j);
        miny=min(miny,i);
        maxx=max(maxx,j);
        maxy=max(maxy,i);
      }
    }
  }

  printf("%d %d\n%d %d\n", miny+1, maxy+1, minx+1, maxx+1);

}
