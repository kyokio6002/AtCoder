#include<bits/stdc++.h>
using namespace std;

int main(){

  double a,b;
  double h,m;
  cin >> a >> b >> h >> m;

  long double Apoint,Bpoint;
  long double height,distance;
  long double adeg,bdeg;
  static const long double pi = 3.141592653589793;

  adeg=(h*60+m)*0.5;
  bdeg=m*6;
  double tpi=180;

  double aX,aY,bX,bY;

  aY=a*sin(adeg*pi/tpi);
  aX=a*cos(adeg*pi/tpi);
  bY=b*sin(bdeg*pi/tpi);
  bX=b*cos(bdeg*pi/tpi);

  double xdist,ydist;

  xdist=pow(aX-bX,2);
  ydist=pow(aY-bY,2);

  distance=pow(xdist+ydist,0.5);

  cout << setprecision(20) << distance << endl;
}
