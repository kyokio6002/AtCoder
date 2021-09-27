#include<bits/stdc++.h>
using namespace std;

int main(){

  int N,K;
  cin >> N >> K;

  vector<int> sunuke(N);

  for(int i=0;i<K;i++){
    int d;
    cin >> d;
    for(int j=0;j<d;j++){
      int a;
      cin >> a;a--;
      sunuke[a]++;
    }
  }

  int count = 0;
  for(int i=0;i<N;i++){
    if(sunuke[i]==0) count++;
  }

  cout << count << endl;
}
