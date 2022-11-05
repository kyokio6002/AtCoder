#include<bits/stdc++.h>
using namespace std;

struct point{
  int x;
  int y;
  point(int x=0, int y=0): x(x), y(y){}
};

bool ccw(point a, point b, point c){
  point ba={a.x-b.x,a.y-b.y};
  point bc={c.x-b.x,c.y-b.y};

  int flag=ba.x*bc.y-ba.y*bc.x;
  if(flag>0)return false;

  return true;
}

int main(){

  vector<point> p(4);
  for(int i=0;i<4;i++)cin >> p[i].x >> p[i].y;

  for(int i=0;i<4;i++){
    point a=p[i];
    point b=p[(i+1)%4];
    point c=p[(i+2)%4];

    if(!ccw(a, b, c)){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}
