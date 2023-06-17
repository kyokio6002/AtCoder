#include <iostream>
using namespace std;

int main(){

  unsigned long long ans=0;
  unsigned long long t=1;
  unsigned long long m=2;

  for(int i=0;i<64;i++){
    unsigned long long d;
    cin >> d;

    ans=ans+d*t;
    t=t*m;
  }

  cout << ans << endl;
}
