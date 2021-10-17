#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  double sum=0;
  vector<double> a(n);
  vector<double> now1(n);
  vector<double> now2(n);
  for(int i=0;i<n;i++){
    cin >> a[i];
    sum+=a[i];
    now1[i]=sum;
  }

  double k=0;
  for(int i=0;i<n;i++){
    now2[n-1-i]=k+a[n-1-i];
    k+=a[n-1-i];
  }

  vector<double> b(n);
  for(int i=0;i<n;i++)cin >> b[i];

  double x1=0;
  double x2=0;
  double index1=0;
  double index2=n-1;
  for(int t=0;t<=100000000;t++){
    if(x1+b[index1]>=now1[index1]){
      double last=now1[index1]-x1;
      double last_time=1-last/b[index1];
      x1=now1[index1];
      index1++;
      x1+=last_time*b[index1];
    }else{
      x1+=b[index1];
    }

    if(x2+b[index2]>=now2[index2]){
      double last=now2[index2]-x2;
      double last_time=1-last/b[index2];
      x2=now2[index2];
      index2--;
      x2+=last_time*b[index2];
    }else{
      x2+=b[index2];
    }

    if(abs(sum-(x1+x2))<=0.00001){
      cout << x1 << endl;
      return 0;
    }
  }


}
