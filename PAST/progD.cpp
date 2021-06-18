#include<bits/stdc++.h>
using namespace std;

bool check(int str1[],int str2[],int size){
  bool flag=1;
  for(int i=0;i<20;i++){
    if(str1[i]!=str2[i]){
      flag=0;
      break;
    }
  }
  if(flag==0) return 0;
  else return 1;
}

int main(){

  int n;
  cin >> n;

  int str0[20]={0,1,1,1,
                0,1,0,1,
                0,1,0,1,
                0,1,0,1,
                0,1,1,1};
  int str1[20]={0,0,1,0,
                0,1,1,0,
                0,0,1,0,
                0,0,1,0,
                0,1,1,1};
  int str2[20]={0,1,1,1,
                0,0,0,1,
                0,1,1,1,
                0,1,0,0,
                0,1,1,1};
  int str3[20]={0,1,1,1,
                0,0,0,1,
                0,1,1,1,
                0,0,0,1,
                0,1,1,1};
  int str4[20]={0,1,0,1,
                0,1,0,1,
                0,1,1,1,
                0,0,0,1,
                0,0,0,1};
  int str5[20]={0,1,1,1,
                0,1,0,0,
                0,1,1,1,
                0,0,0,1,
                0,1,1,1};
  int str6[20]={0,1,1,1,
                0,1,0,0,
                0,1,1,1,
                0,1,0,1,
                0,1,1,1};
  int str7[20]={0,1,1,1,
                0,0,0,1,
                0,0,0,1,
                0,0,0,1,
                0,0,0,1};
  int str8[20]={0,1,1,1,
                0,1,0,1,
                0,1,1,1,
                0,1,0,1,
                0,1,1,1};
  int str9[20]={0,1,1,1,
                0,1,0,1,
                0,1,1,1,
                0,0,0,1,
                0,1,1,1};

  char c;
  vector<vector<int>> str(n);
  int nowStr[20];
  for(int y=0;y<5;y++){
    for(int time=0;time<n;time++){
      for(int x=0;x<4;x++){
        cin  >> c;
        if(c=='#') str[time].push_back(1);
        else str[time].push_back(0);
      }
    }
    cin >> c;
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<20;j++){
      nowStr[j]=str[i][j];
      //cout<< nowStr[j];
      //if(j%4==3) cout << endl;
    }
    if(check(nowStr,str0,20)) cout << 0;
    else if(check(nowStr,str1,20)) cout << 1;
    else if(check(nowStr,str2,20)) cout << 2;
    else if(check(nowStr,str3,20)) cout << 3;
    else if(check(nowStr,str4,20)) cout << 4;
    else if(check(nowStr,str5,20)) cout << 5;
    else if(check(nowStr,str6,20)) cout << 6;
    else if(check(nowStr,str7,20)) cout << 7;
    else if(check(nowStr,str8,20)) cout << 8;
    else if(check(nowStr,str9,20)) cout << 9;
    else cout << "なんでやねん" << endl;
  }

  cout << endl;
}
