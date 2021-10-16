#include<bits/stdc++.h>
using namespace std;

int main(){

  long double n;
  cin >> n;
  long double x1,y1,x2,y2;
  cin >> x1 >> y1 >> x2 >> y2;

  long double pi=3.14159263*2;

  long double div=pi/n;

  long double centerx=(x2+x1)/2;
  long double centery=(y1+y2)/2;
  x1-=centerx;
  y1-=centery;

  long double ansx=x1*cos(div)-y1*sin(div);
  long double ansy=y1*cos(div)+x1*sin(div);

  // cout << "centerx:" << centerx << endl;
  // cout << "centery:" << centery << endl;
  // cout << "x1:" << x1 << endl;
  // cout << "x2:" << x2 << endl;
  // cout << "y1:" << y1 << endl;
  // cout << "y2:" << y2 << endl;
  // cout << "ansx:" << ansx << endl;
  // cout << "ansy:" << ansy << endl;
 
  cout << ansx+centerx << endl;
  cout << ansy+centery << endl;
}
