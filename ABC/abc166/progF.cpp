#include<bits/stdc++.h>
using namespace std;

int main(){

  int N;
  cin >> N;
  int A,B,C;
  cin >> A >> B >> C;

  vector<vector<int>> ABC(N,vector<int>(3,0));
  vector<char> S(N);
  bool ans = 1;

  for(int i=0;i<N;i++){
    string str;
    cin >> str;

    if(str=="AB"){
      ABC[i][0]=1;
      ABC[i][1]=1;
    }
    else if(str=="AC"){
      ABC[i][0]=1;
      ABC[i][2]=1;
    }
    else if(str=="BC"){
      ABC[i][1]=1;
      ABC[i][2]=1;
    }
  }


  for(int i=0;i<N;i++){
    if(ABC[i][0]==1 && ABC[i][1]==1 && ABC[i][2]==0){
      if(A==0 && B==0){
        ans = 0;
        break;
      }else if(A==0){
        S[i]='A';
        A++;
        B--;
      }else if(B==0){
        S[i]='B';
        B++;
        A--;
      }else{
        if(i!=N-1){
          if(ABC[i+1][0]==1){
            S[i]='A';
            A++;
            B--;
          }else if(ABC[i+1][1]==1){
            S[i]='B';
            B++;
            A--;
          }
        }else{
          S[i]='A';
          A++;
          B--;
        }
      }
    }else if(ABC[i][0]==1 && ABC[i][1]==0 && ABC[i][2]==1){
      if(A==0 && C==0){
        ans = 0;
        break;
      }else if(A==0){
        S[i]='A';
        A++;
        C--;
      }else if(C==0){
        S[i]='C';
        C++;
        A--;
      }else{
        if(i!=N-1){
          if(ABC[i+1][0]==1){
            S[i]='A';
            A++;
            C--;
          }else if(ABC[i+1][2]==1){
            S[i]='C';
            C++;
            A--;
          }
        }else{
          S[i]='A';
          A++;
          C--;
        }
      }
    }else if(ABC[i][0]==0 && ABC[i][1]==1 && ABC[i][2]==1){
      if(B==0 && C==0){
        ans = 0;
        break;
      }else if(B==0){
        S[i]='B';
        B++;
        C--;
      }else if(C==0){
        S[i]='C';
        C++;
        B--;
      }else{
        if(i!=N-1){
          if(ABC[i+1][1]==1){
            S[i]='B';
            B++;
            C--;
          }else if(ABC[i+1][2]==1){
            S[i]='C';
            C++;
            B--;
          }
        }else{
          S[i]='B';
          B++;
          C--;
        }
      }
    }
    if(ans==0) break;
  }

  if(ans==0) cout << "No" << endl;
  else{
    cout << "Yes" << endl;
    for(int i=0;i<N;i++){
      cout << S[i] << endl;
    }
  }
}
