#include <iostream>
using namespace std;

int main(){

  int n;
  cin >> n;
  int forsum=0;
  string s;
  for(int i=0;i<n;i++){
    cin >> s;
    if(s=="For")forsum++;
  }

  if(forsum>n/2)cout << "Yes" << endl;
  else cout << "No" << endl;
}
