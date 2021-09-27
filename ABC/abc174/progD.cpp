#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	string s;
	cin >> s;

	//並びをチェック
	for(int i=1;i<n;i++){
		if(s[i-1]=='W' && s[i]=='R'){
			break;
		}
		if(i==n-1){
			cout << 0 << endl;
			return 0;
		}
	}
	int ans=0;
	int red_right=n-1,white_left=0;
	while(1){
		//右端の赤を探す
		for(int r=red_right;r>0;r--){
			if(r==white_left){
				cout << ans << endl;
				return 0;
			}else if(s[r]=='R'){
				red_right=r;
				break;
			}
		}

		//左端を探す
		for(int l=white_left;l<n;l++){
			if(l==red_right){
				cout << ans << endl;
				return 0;
			}else if(s[l]=='W'){
				white_left=l;
				break;
			}
		}

		s[red_right]='W';
		s[white_left]='R';
		ans++;
	}
	cout << ans << endl;
}
