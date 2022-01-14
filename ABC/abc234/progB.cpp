#include<bits/stdc++.h>
using namespace std;

struct point{
  double x;
  double y;
};

double distance(point point1,point point2){
  return pow(pow((point1.x-point2.x),2)+pow((point1.y-point2.y),2),0.5);
}

int main(){
  int n;
  cin >> n;

  vector<point> ps(n);
  for(int i=0;i<n;i++)cin >> ps[i].x >> ps[i].y;
  
  double ans=0;
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      ans=max(ans,distance(ps[i],ps[j]));
    }
  }

  cout << fixed << setprecision(10) << ans << endl;
}
