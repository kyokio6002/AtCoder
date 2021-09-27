#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){

	ll x,y,a,b;
	cin >> x >> y >> a >> b;
	ll ans=0;

	ll swich = b/(a-1);//swichする場所

	//swichする場所とxで場合わけ
	if(x<swich){
		if(y<swich){
			while(1){
				if(x>=y/a)break;
				ans++;
				x*=a;
			}
			//cout << "case01" << endl;
		}else{
			while(1){
				if(x>=swich/a)break;
				ans++;
				x=x*a;
			}
			//cout << ans << endl;
			ans+=(y-x)/b;
			if((y-x)%b==0)ans--;
			//cout << "case02" << endl;
		}
	}else{
		ans=(y-x)/b;
		if((y-x)%b==0)ans--;
		//cout << "case03" << endl;
	}

	cout << ans << endl;
}

