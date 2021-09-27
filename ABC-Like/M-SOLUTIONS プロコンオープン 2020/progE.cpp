#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
	int n;
	cin >> n;
	map<int,int> mp;//集落の人口
	int x,y,p,key;
	int max_x=0,max_y=0;
	pair<ll,int> P;
  map<int,int> sumX;
	map<int,int> sumY;	
	for(int i=0;i<n;i++){
		cin >> x >> y >> p;
		key=x*100000+y;//keyに座標
		mp[key]=p;
		max_x=max(max_x,x);//最大のx
		max_y=max(max_y,y);//最大のy
		sumX[x]+=p;
		sumY[y]+=p;
	}

	priority_queue<pair<int,int>> queX;
	priority_queue<pair<int,int>> queY;
	for(auto u:sumX){
		x=u.first;
		p=u.second;
		queX.push(make_pair(p,x));
	}
	for(auto u:sumY){
		y=u.first;
		p=u.second;
		queY.push(make_pair(p,y));
	}

	bool flag = 0;
	priority_queue<pair<int,int> quex,quey;
  for(int i=1;i<=n;i++){
		if(flag==1){
			cout << 0 << endl;
			continue;
		}

		quex = queX;
		quey = queY;
		pair<int,int> p;
		int valueX,valueY;
		//現在選んでいる本数
		for(int j=0;j<i;j++){
			//xの最大を抜き出す
			if(!quex.empty()){
				p = quex.top();
				quex.pop();
				valueX = p.first;
				x = p.second;
			}else if(quex.empty()){
				valueX = 0;
			}

			//yのtopを抜き出す
			if(!quey.empty()){
				p = quey.top();
				quey.pop();
				valueY = p.first;
				y = p.second;
			}else if(quey.empty()){
			  valueY=0;
			}


		}
		
	}

}

