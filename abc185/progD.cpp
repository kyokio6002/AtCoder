#include<bits/stdc++.h>
using namespace std;

#define INF 1000000007
int main(){

	int n,m;
	cin >> n >> m;
	vector<int> a(m);
	int b;
	for(int i=0;i<m;i++){
		cin >> b;
		b--;
		a[i]=b;
	}

	sort(a.begin(),a.end());
	int bet=INF;
	int prio=a[0];
	for(int i=1;i<m;i++){
		if(a[i]-prio-1!=0)bet=min(bet,a[i]-prio-1);
		prio=a[i];
	}

	cout << "bet:" << bet << endl;
	int ans=(n-m)/bet;
	cout << ans << endl;
}
