#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){

  int n;
  cin >> n;
  vector<char> p;
  for(int i=0;i<1000;i++)p.push_back('A');
  for(int i=0;i<66;i++)p.push_back('B');

  do{
    ll sum=0;
    int stop;
    for(int i=0;i<120;i++){
      if(p[i]=='A')sum+=1;
      else sum*=2;
      if(sum>n)break;
      if(sum==n){
        for(int j=0;j<=i;j++)cout << p[j];
        cout << endl;
        return 0;
      }
    }
  }while(next_permutation(p.begin(),p.end()));

}
