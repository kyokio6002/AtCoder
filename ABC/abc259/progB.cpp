#include<bits/stdc++.h>
using namespace std;

int main(){

  double a,b,d;
  cin >> a >> b >> d;
  double pi=3.14159265358979323846;

  double x=a*cos(d*pi/180)-b*sin(d*pi/180);
  double y=a*sin(d*pi/180)+b*cos(d*pi/180);

  printf("%.8lf %.8lf\n",x,y);

}
