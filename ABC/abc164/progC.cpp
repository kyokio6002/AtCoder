#include<bits/stdc++.h>
using namespace std;

int main(){

  int num;
  cin >> num;

  set<string> st;

  for(int i=0;i<num;i++){
    string nowStr;
    cin >> nowStr;
    st.insert(nowStr);
  }

  cout << st.size() << endl;

}
