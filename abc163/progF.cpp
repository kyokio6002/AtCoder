#include<bits/stdc++.h>
using namespace std;

int N;
vector<int> c(N);
vector<int> a(N-1);
vector<int> b(N-1);
vector<vector<int>> tree(N,vector<int>(N,0));
int from[N+1];
menset(from,0,sizeof(from));//初期化

//深さ探索(現在探索してる列,飛んできた列,通った場所配列,配列の数,入力される辺の数,)
int dfs(int now,int fromNum,int from[],int num,int ipput,){
  //横スライドで検索
  for(int i=0;i<N+1;i++){
    if(tree[now][i]==1){
      //端まできたら終了
      if(i==N&&tree[now][i]==0) break
      //縦スライドで探索
      for(int j=0;j<N+1;j++){
        if(tree[now][j]==fromNum)//きたところのますはスルー
        //繋がる場所あったら
        else if(tree[now][j]==1){

        }
      }
    }
  }
}


int main(){

  //入力受付
  cin >> N;
  for(int i=0;i<N;i++) cin >> c[i];
  for(int i=0;i<N-1;i++) cin >> a[i] >> b[i];

  vector<vector<int>> color(N,vector<int>(N,0));
  vector<vector<int>> line(N-1,vector<int>(N-1,0));//0=つながってない,1=つながってる

  //辺の繋がりを求める(辺iは辺jと繋がるか？)
  /*
  for(int i=0;i<N-1;i++){
    for(int j=i;j<N-1;j++){
      if(a[i]==a[j]||a[i]==b[j]){
        cout << i << "," << j << "の時接続";
        //iとjが接続されている
        line[i][j]=1;
        cout << line[i][j] << endl;
      }else if(b[i]==a[j]||b[i]==b[j]){
        cout << i << "," << j << "の時接続";
        line[i][j]=1;
        cout << line[i][j] << endl;
      }
    }
  }

  for(int i=1;i<=N;i++){
    for(int j=0;j<N;j++){
      if(a[j]==i){
        cout << "a" << j+1 << "=" << i << endl;
        tree[i-1][b[j]-1] = 1;
      }else if(b[j]==i){
        cout << "b" << j+1 << "=" << i << endl;
        tree[i-1][a[j]-1] = 1;
      }
    }
  }

  for(int i=0;i<N-1;i++){
    for(int j=0;j<N-1;j++){
      cout << line[i][j];
    }
    cout << endl;
  }*/

  cout << endl;
  cout << "　   ";
  for(int i=0;i<N;i++) cout << i+1;
  cout << endl;
  cout << "　 c:";
  for(int i=0;i<N;i++) cout << c[i];
  cout << endl;
  for(int i=0;i<N;i++){
    cout << "点" << i+1 << "," << ":";
    for(int j=0;j<N;j++){
      cout << tree[i][j];
    }
    cout << endl;
  }

  //点①スタートで
  for(int i=0;i<N;i++){

  }

}
