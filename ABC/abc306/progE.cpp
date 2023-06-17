#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main(){

  int n,k,q;
  cin >> n >> k >> q;

  int x,y;
  list<int> lst;
  vector<pair<int,int>> a(n); //num, lst_index
  while(q--){
    cin >> x >> y;x--;
    int lst_index = 0;
    a[x]={y,lst_index};
  }
}
