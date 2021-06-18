#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define max_num 1000000000000000000
#define max_itr 10000000

int  main(){

	ll x,k,d;
	cin >> x >> k >> d;
	if(x<0) x=-x;//xを正にする


	//k回移動しても0を超えない場合
 	if(x/d>k){
		x-=d*k;
		cout << x << endl;
		return 0;
	}else{
		ll step = x/d;
		k-=step;
		x-=step*d;
		if(k%2 == 1) x = abs(x-d);
		cout << x << endl;
		return 0;
	}
}
