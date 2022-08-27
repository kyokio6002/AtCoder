#include<bits/stdc++.h>
using namespace std;

typedef struct point{
  double x;
  double y;
}point;

int main(){

  vector<point> p(4);
  for(int i=0;i<4;i++)cin >> p[i].x >> p[i].y;

  vector<point> edge(4);
  for(int i=0;i<4;i++){
    edge[i].x=p[i].x-p[(i+1)%4].x;
    edge[i].y=p[i].y-p[(i+1)%4].y;
  }

  double ans=0;
  vector<double> rr;

  for(int i=0;i<4;i++){
    point a=edge[i];
    point b=edge[(i+1)%4];
    double lena=sqrt(a.x*a.x+a.y*a.y);
    double lenb=sqrt(b.x*b.x+b.y*b.y);

    double coss=acos((a.x*b.x+a.y*b.y)/(lena*lenb));

    double rad=coss*180.0/M_PI;

    // cout << "lena:" << lena << endl;
    // cout << "lenb:" << lenb << endl;
    // cout << "coss:" << coss << endl;
    // cout << "rad:" << rad << endl;

    // point p1=p[(i+1)%4];
    // point p2=p[(i+3)%4];
    // point c={(p2.x-p1.x),(p2.y-p1.y)};
    // double lenc=sqrt(c.x*c.x+c.y*c.y);
    // if((lenc<=lena && lenc<=lenb) && rad>=90)ans=true;
    ans+=rad;
    rr.push_back(rad);
  }

  for(int i=0;i<4;i++){
    double sum=rr[(i+1)%4]+rr[(i+2)%4]+rr[(i+3)%4];
    if(sum>360.0 && sum+(360.0-rr[i])==360){
      cout << "No" << endl;
      return 0;
    }
  }

  if(ans>360.0)cout << "No" << endl;
  else cout << "Yes" << endl;

}
