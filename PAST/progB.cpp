#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,m,q;
  cin >> n >> m >> q;

  vector<vector<bool>> points(n,vector<bool>(m,0));
  vector<int> saveNum(m,0);

  int check;
  int person;
  int prov;
  int sum;
  for(int i=0;i<q;i++){
    cin >> check;
    sum=0;
    if(check==1){
      cin >> person;person--;
      for(int j=0;j<m;j++){
        if(points[person][j]==1) sum+=n-saveNum[j];
      }
      cout << sum << endl;
    }else if(check==2){
      cin >> person >> prov;person--;prov--;
      points[person][prov]=1;
      saveNum[prov]++;
    }
  }
}
