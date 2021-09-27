#include<bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0;i<int(n);i++)
#define rep1(i,j,n) for(int j=i+1;j<int(n);j++)

//中心からの距離を求める
double distance(int a,double center){
  if(a>center){
    return double(a)-center;
  }else{
    return center - double(a);
  }
}

//絶対値
int plusA(int a){
  if(a>=0){
    return a;
  }else{
    return -a;
  }
}

int main(){
  //入力受付
  int N;
  cin >> N;
  int A[N];
  int B[N][2];
  vector<int> C(N,0);
  int sum = 0;

    rep(i,N){
    cin >> A[i];//嬉しさの初期値を入れる
    B[i][0]=A[i];
    B[i][1]=i;
    cout << "B[i]:" << B[i][0] << "," << B[i][1] << endl;
  }
  cout << endl;


  for(int i=0;i<N;i++){
    //cout << "i:" << i << " B[i]:" << B[i][0] << endl;
    for(int j=i+1;j<N;j++){
      //cout << "j:" << j << " B[j]:" << B[j][0] << endl;
      //小さかった場合
      if(B[i][0]<B[j][0]){
        int tmp1 = 0;
        tmp1 = B[i][0];
        B[i][0] = B[j][0];
        B[j][0] = tmp1;

        int tmp2 = 0;
        tmp2 = B[i][1];
        B[i][1] = B[j][1];
        B[j][1] = tmp2;

        //swap(B[i][0],B[j][0]);
        //swap(B[i][1],B[j][1]);
        //cout << "swap:" << "B[0]" << B[i][0] << "⇄" << B[j][0] << endl;
        //cout << "swap:" << "B[1]" << B[i][1] << "⇄" << B[j][1] << endl;
      }else if(B[i][0]==B[j][0]){
        if(distance(B[i][1],double(N-1)/2)<distance(B[j][1],double(N-1)/2)){
          //swap(B[i][0],B[j][0]);
          //swap(B[i][1],B[j][1]);
          int tmp1 = 0;
          tmp1 = B[i][0];
          B[i][0] = B[j][0];
          B[j][0] = tmp1;

          int tmp2 = 0;
          tmp2 = B[i][1];
          B[i][1] = B[j][1];
          B[j][1] = tmp2;
          //cout << "swap:" << "B[0]" << B[i][0] << "⇄" << B[j][0] << endl;
          //cout << "swap:" << "B[1]" << B[i][1] << "⇄" << B[j][1] << endl;
        }else{
          //何もしない
        }
      }else{
        //何もしない
      }
    }
  }

  cout << endl;
  rep(i,N){
    cout << "B[][]:" << B[i][0] << "," << B[i][1] << endl;
  }

  int ans[N];
  rep(j,N){
    int maxIndex = 0;
    int maxrenge = 0;
    cout << "ターンj:" << j << "入ったよ　"<< endl;
    cout << "B[][]:" << B[j][0] << "," << B[j][1] << endl;
    for(int i=0;i<N;i++){
      //移動可能かつ最長移動距離ならmaxIndex,maxrengeを更新
      cout << "ターンi:" << i << endl;
      if(C[i]==0 && plusA(B[j][1]-i) > maxrenge){
        cout << "ターンi:" << i << "入ったよ　"<< endl;
        //以降移動不可能にする
        C[i]=1;
        rep(j,N){
          cout << C[j];
        }
        cout << endl;
        maxIndex = i;//移動さきのindex
        cout << "B[i][0]:" << B[j][1] << endl;
        cout << "maxrange = " << B[j][1] << "-" << i << endl;
        cout << "maxrenge" << maxrenge;
        maxrenge = plusA(B[j][1]-i);//移動距離
        cout << "→" << maxrenge << endl;
        cout << B[j][0] << "→" << maxIndex << endl;
      }
    }
    for(int k=0;k<N;k++){
      if(C[k]==1){
        C[k]=0;
      }
    }
    C[maxIndex] = 2;
    ans[maxIndex] = B[j][0];

    //合計値を更新
    sum += B[j][0]*maxrenge;
  }

  cout << endl;
  rep(i,N){
    cout << "B[][]:" << B[i][0] << "," << B[i][1] << endl;
  }
  cout << "sum:" << sum << endl;

  cout << endl <<"いきまーす:";
  rep(i,N){
    cout << ans[i];
  }
  cout << endl;
}
