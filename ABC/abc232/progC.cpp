#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,m;
  cin >> n >> m;
  vector<map<int,int>> ab(n);
  vector<map<int,int>> cd(n);
  int s,t;
  for(int i=0;i<m;i++){
    cin >> s >> t;
    s--,t--;
    ab[s][t]++;
    ab[t][s]++;
  }

  for(int i=0;i<m;i++){
    cin >> s >> t;
    s--,t--;
    cd[s][t]++;
    cd[t][s]++;
  }

  vector<int> list(n);
  for(int i=0;i<n;i++)list[i]=i;
  do{
    int flag=1;
    for(int i=0;i<n-1;i++){
      for(int j=i+1;j<n;j++){
        if(ab[i][j]){
          if(!cd[list[i]][list[j]])flag=0;
        }
      }
    }
    if(flag){
      cout << "Yes" << endl;
      return 0;
    }
  }while(next_permutation(list.begin(),list.end()));

  cout << "No" << endl;


}
