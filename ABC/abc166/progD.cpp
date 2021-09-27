#include<bits/stdc++.h>
using namespace std;

int main(){

  double X;
  cin >> X;

  int ansA;
  int ansB;
  double sum;

  for(int A=-118;A<=119;A++){
    for(int B=-118;B<=119;B++){
      sum = pow(A,5) - pow(B,5);
      if(sum == X){
        ansA = A;
        ansB = B;
        break;
      }
    }
    if(sum == X) break;
  }

  cout << ansA << " " << ansB << endl;
}
