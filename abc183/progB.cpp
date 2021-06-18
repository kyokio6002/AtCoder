#include<bits/stdc++.h>
using namespace std;

int main(){

	double sx,sy,gx,gy;
	cin >> sx >> sy >> gx >> gy;

	gy=-1*gy;

	double ans=((gx-sx)/(gy-sy))*(-sy)+sx;

	cout << fixed << setprecision(10) << ans << endl;

}
