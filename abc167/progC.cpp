#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,m,x;
  cin >> n >> m >> x;

  vector<int> c(n);
  vector<vector<int>> a(n,vector<int>(m));
  for(int i=0;i<n;i++){
    cin >> c[i];
    for(int j=0;j<m;j++) cin >> a[i][j];
  }

  int num = 0b0000'0000'0000;
  int stop = int(pow(2,n));

  int ans=1200008;
  int nowAns=0;
  vector<int> ar(m,0);
  int okCount=0;


  for(int bit=num;bit<stop;bit++){
    //nこの参考書の01の組み合わせで足してい
    okCount=0;
    nowAns=0;
    for(int t=0;t<m;t++) ar[t]=0;
    //cout << "bit:" << bitset<5>(bit) << endl;
    //参考書jのそれぞれの習熟度を足していく
    for(int j=0;j<n;j++){
      if(bit & (1<<j)){
        //cout << bitset<5>(1<<j) << endl;
        //cout << "入った" << endl;
        nowAns+=c[j];
        for(int k=0;k<m;k++){
          ar[k]+=a[j][k];
        }
      }
    }
    for(int f=0;f<m;f++){
      if(ar[f]>=x) okCount++;
      //cout << ar[f] << ",";
    }//cout << endl;
    //cout << "okCount:" << okCount << endl;
    if(okCount==m){
      //cout << "入った01" << endl;
      ans = min(ans,nowAns);
    }
    //cout << "ans:" << ans << endl << endl;
  }

  if(ans==1200008) cout << "-1" << endl;
  else cout << ans << endl;
}
