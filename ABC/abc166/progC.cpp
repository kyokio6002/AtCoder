#include<bits/stdc++.h>
using namespace std;

int main(){

  int N;//展望台の数
  int M;//道の数
  cin >> N >> M;

  vector<int> H(N);
  for(int i=0;i<N;i++){
    int h;
    cin >> h;
    H[i] = h;
  }

  vector<int> edge[N];

  for(int i=0;i<M;i++){
    int a,b;
    cin >> a >> b;a--;b--;
    edge[a].push_back(b);
    edge[b].push_back(a);
  }

  int count = 0;

  cout << endl;

  for(int i=0;i<N;i++){
    cout << "edge.size:" << edge[i].size() << endl;
    if(edge[i].size()==0){
      count++;
      cout << "countします00:" << count << endl;
    }
    else{
      for(int j=0;j<edge[i].size();j++){
        if(H[i] <= H[edge[i][j]]) break;
        else if(j==(edge[i].size()-1)) {
          count++;
          cout << "countします01:" << count << endl;
        }
      }
    }
  }

  cout << count << endl;
}
