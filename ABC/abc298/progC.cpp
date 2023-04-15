#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
  
  int n;
  cin >> n;
  int q;
  cin >> q;

  int t,i,j;
  vector<map<int,int>> box(n);
  map<int,map<int,int>> which_box;
  while(q--){
    cin >> t;
    if(t==1){
      // カードiをjに入れる
      cin >> i >> j;j--;
      box[j][i]++;
      // カードiが入っているboxはj
      which_box[i][j]++;
    }else if(t==2){
      cin >> i;i--;
      for(auto [key, value]: box[i]){
        for(int i=0;i<value;i++)cout << key << " ";
      }
      cout << endl;
    }else if(t==3){
      cin >> i;
      for(auto [key, _]: which_box[i]){
        cout << key+1 << " ";
      }
      cout << endl;
    }
  }

}
