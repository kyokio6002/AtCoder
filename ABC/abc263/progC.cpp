#include<bits/stdc++.h>
#include <string>
using namespace std;

vector<vector<int>>  ans;
int n,m;

void dfs(int depth,vector<int> num){
  if(depth==n){
    ans.push_back(num);
    // cout << "return:" << s_num << endl;
    return;
  }

  int prio=num[num.size()-1];
  // cout << "s_num:" << s_num << endl;
  // cout << "prio:" << prio << endl;
  // cout << "depth:" << depth << endl;
  // cout << "n-depth:" << n-depth << endl;
  for(int i=prio+1;i<=m-n+depth+1;i++){
    vector<int> nnum=num;
    nnum.push_back(i);
    dfs(depth+1,nnum);
  }
}

int main(){

  cin >> n >> m;

  for(int i=1;i<=m-n+1;i++){
    vector<int> num(1,i);
    dfs(1,num);
  }

  sort(ans.begin(),ans.end());
  for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++){
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }

}
