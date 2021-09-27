#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin >> n;

	vector<int> x(n);
	vector<int> y(n);

	for(int i=0;i<n;i++){
		cin >> x[i] >> y[i]; 
	}

	double del;
	int ans=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			del=double(y[i]-y[j])/(x[i]-x[j]);
			del=abs(del);
			if(del<=1)ans++;
		}
	}

	cout << ans << endl;
}
