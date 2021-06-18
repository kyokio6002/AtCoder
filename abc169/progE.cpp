#include<bits/stdc++.h>
using namespace std;

int main(){

  int N;
  cin >> N;
  vector<int> numA;
  vector<int> numB;

  int a,b;
  for(int i=0;i<N;i++){
    cin >> a >> b;
    numA.emplace_back(a);
    numB.emplace_back(b);
  }

  sort(numA.begin(),numA.end());
  sort(numB.begin(),numB.end());

  int maxC;
  int minC;
  if(N%2==0){
    minC=(numA[(N/2)-1]+numA[N/2]);
    maxC=(numB[(N/2)-1]+numB[N/2]);
    cout << (maxC-minC)+1 << endl;
  }else{
    minC=numA[(N-1)/2];
    maxC=numB[(N-1)/2];
    cout << maxC-minC+1 << endl;
  }

}
