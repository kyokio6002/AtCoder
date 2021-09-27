#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define nINF -2000000000000000

int main(){
	
	int n,k;
	cin >> n >> k;
	vector<int> p(n);
	vector<int> c(n);
	int a;
	for(int i=0;i<n;i++){
		cin >> a;
		a--;
		p[i]=a;
	}
	for(int i=0;i<n;i++){
		cin >> a;
		c[i]=a;
	}

	ll ans=nINF;
	for(int start=0;start<n;start++){
		//1repを確認
		vector<int> dist(n,-1);
		int replen=0;
		ll repsum=0;
		int now=start;
		ll nowans=nINF;
		ll nowsum=0;
		ll repmax=nINF;
		while(1){
			now=p[now];
			//cout << now << "→";
			if(dist[now]!=-1) break;
			dist[now]++;
			repsum+=c[now];
			replen++;
			repmax=max(repmax,repsum);
		}
		int reptime=0;
		if(repsum>0) reptime=k/replen;
		int last = replen;
		if(repsum>0)last=k%replen;
		/*cout << "start:" << start << endl;
		cout << "replen:" << replen << endl;
		cout << "repsum:" << repsum << endl;
		cout << "reptime:" << reptime << endl;
		cout << "last:" << last << endl;*/

		//repsum>0ならできるだけ回す
		if(repsum>0) nowsum=repsum*reptime;
		now=start;
		int flag=0;
		if(last==replen){
			flag=1;
			now=p[now];
			nowsum=c[now];
		}
		nowans=nowsum;
		for(int i=flag;i<last;i++){
			now=p[now];
			nowsum+=c[now];
			nowans=max(nowans,nowsum);
		}

		//cout << nowans << "→";
		if(repsum>0 && reptime>0){
			nowans=max(nowans,repsum*(reptime-1)+repmax);
		}
		//cout << "nowans:" << nowans <<  endl;
		ans=max(ans,nowans);
		//cout << "ans:" << ans << endl << endl;
	}

	cout << ans << endl;
}

