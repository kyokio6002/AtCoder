#include <iostream>
using namespace std;

int main(){

  int s;
  int prio;
  cin >> prio;
  if(prio<100 || prio>675 ||  prio%5!=0){
    cout << "No" << endl;
    return 0;
  }

  for(int i=0;i<7;i++){
    cin >> s;
    if(s%5!=0 || s>675 || prio>s){
      cout << "No" << endl;
      return 0;
    }
    prio=s;
  }

  cout << "Yes" << endl;

}
