#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin >> n;
	vector<int> x(n),y(n);
	for(int i=0;i<n;i++) cin >> x[i] >> y[i];
	int a,b;
	for(int i=0;i<n-2;i++){
		for(int j=i+1;j<n-1;j++){
			for(int k=j+1;k<n;k++){
				a=(y[k]-y[i])*(x[j]-x[i]);
				b=(y[j]-y[i])*(x[k]-x[i]);
				if(a==b){
					cout << "Yes" << endl;
					return 0;
				}
			}
		}
	}

	cout << "No" << endl;
}
