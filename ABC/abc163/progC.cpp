#include<bits/stdc++.h>
using namespace std;

int main(){

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int N;//社員の人数
  int c,sum = 0;

  cin >> N;

  int A[N];

  for(int i=0;i<N;i++){
    A[i] = 0;
  }
  for(int i=0;i<N-1;i++){
    cin >> c;
    A[c-1]++;
  }

  for(int j=0;j<N;j++){
    cout << A[j] << endl;
  }

}
