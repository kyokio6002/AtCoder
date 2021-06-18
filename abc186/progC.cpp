#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin >> n;
	int ans=0;
	int e=0;
	int now;
	string se,st;
	for(int i=1;i<=n;i++){
		e++;
		now=e;
		if(now%10==8){
			e+=10;
			e-=8;
		}
		now=e;
		if((now/10)%10==8){
			e+=100;
			e-=80;
		}
		now=e;
		if((now/100)%10==8){
			e+=1000;
			e-=800;
		}
		now=e;
		if((now/1000)%10==8){
			e+=10000;
			e-=8000;
		}
		now=e;
		if((now/10000)%10==8){
			e+=100000;
			e-=80000;
		}
		//cout << "e:" << e << endl;
		//cout << "t:" << i << endl;
		se=to_string(e);
		st=to_string(i);
		if(se.find("7")==string::npos && st.find("7")==string::npos){
			//cout << i << endl;
			ans++;
		}
	}

	cout << ans << endl;
}
