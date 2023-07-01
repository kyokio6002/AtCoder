#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

struct tt{
  long long a;
  long long b;
  int index;
};

bool asc_desc(tt& left, tt& right) {
  long long idata = left.a*(right.a+right.b);
  long long jdata = right.a*(left.a+left.b);
  if (idata == jdata) {
    return left.index > right.index;
  } else {
    return idata < jdata;
  }
}

int main(){

  int n;
  cin >> n;
  vector<tt> ps(n);
  long long a,b;
  for(int i=0;i<n;i++){
    cin >> a >> b;
    ps[i].a = a;
    ps[i].b = b;
    ps[i].index = i;
  }

  sort(ps.rbegin(),ps.rend(),asc_desc);
  for(int i=0;i<n;i++)cout << ps[i].index+1 << " \n"[i==n-1];
  
}
