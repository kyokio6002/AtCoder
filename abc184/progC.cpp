#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int x1,x2,y1,y2;
	cin >> x1 >> y1 >> x2 >> y2;
	int deltax=x2-x1;
	int deltay=y2-y1;
	if(x1==x2 && y1==y2){
		cout << 0 << endl;
		return 0;
	}else if(deltax==deltay || deltax==-deltay || abs(deltax)+abs(deltay)<=3){
		cout << 1 << endl;
		return 0;
	}else if(abs(deltax)%2==abs(deltay)%2){
		cout << 2 << endl;
		return 0;
	}
	
	if(abs(deltax+deltay)<=3 || abs(deltax-deltay)<=3){
		cout << 2 << endl;
	}else if(abs(deltax)+abs(deltay)<=6){
		cout << 2 << endl;
	}else{
		cout << 3 << endl;
	}
}
