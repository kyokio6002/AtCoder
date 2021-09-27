#include<bits/stdc++.h>
using namespace std;

int main(){

  int h,w,k;
  cin >> h >> w >> k;

  vector<vector<char>> mp(w,vector<char>(h));
  vector<int> xBlack(w,0);
  vector<int> yBlack(h,0);
  int count=0;
  int ans=0;

  for(int y=0;y<h;y++){
    for(int x=0;x<w;x++){
      cin >> mp[x][y];
      if(mp[x][y]=='#'){
        xBlack[x]++;
        yBlack[y]++;
        count++;
      }
    }
  }

  int last=count-k;
  if(last<0){
    cout << 0 << endl;
    return 0;
  }

  int xtime=1,ytime=1;
  for(int i=0;i<h;i++) ytime=ytime*2;
  for(int i=0;i<w;i++) xtime=xtime*2;
  //cout << "xtime:" << xtime << endl;
  //cout << "ytime:" << ytime << endl;

  int sum;
  for(int ybit=0;ybit<ytime;ybit++){
    sum=0;
    //cout << "ybit:" << bitset<8>(ybit) << endl;
    vector<int> xBlackCP = xBlack;
    for(int i=0;i<h;i++){
      if(ybit&(1<<i)){
        sum+=yBlack[i];
        //cout << "sum:" << sum << endl;
        for(int x=0;x<w;x++){
          if(mp[x][i]=='#'){
            xBlackCP[x]--;
          }
        }
      }
    }
    int sumCP;
    for(int xbit=0;xbit<xtime;xbit++){
      sumCP=sum;
      for(int j=0;j<w;j++){
        if(xbit&(1<<j)){
          sumCP+=xBlackCP[j];
        }
        //cout << "sum:" << sum << endl;
      }
      //cout << "last-sum:" << last-sum << endl;
      if(sumCP==last){
        ans++;
      }
    }
    //cout << ans << endl << endl;
  }

  cout << ans << endl;
}
