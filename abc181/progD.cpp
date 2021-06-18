#include<bits/stdc++.h>
using namespace std;

int main(){

	string s;
	cin >> s;

	int len=s.length();
	int n;
	vector<int> num(10,0);
	for(int i=0;i<len;i++){
		n=(s[i]-'0');
		num[n]++;
	}

	for(int top=0;top<10;top++){
		for(int mid=0;mid<10;mid++){
			for(int bot=0;bot<10;bot++){
				if(len==1){
					if((s[0]-'0')==8) cout << "Yes" << endl;
					else cout << "No" << endl;
					return 0;
				}else if(len==2){
					int a,b;
					a=(s[0]-'0');
					b=(s[1]-'0');
					if((a*10+b)%8==0 || (b*10+a)%8==0) cout << "Yes" << endl;
					else cout << "No" << endl;
					return 0;
				}else{
					num[top]--;
					num[mid]--;
					num[bot]--;

					int sum=top*100+mid*10+bot;
					if(num[top]>=0 && num[mid]>=0 && num[bot]>=0 && sum%8==0){
						cout << "Yes" << endl;
						return 0;
					}
					num[top]++;
					num[mid]+++
					num[bot]++;
				}
			}
		}
	}
	cout << "No" << endl;
}
