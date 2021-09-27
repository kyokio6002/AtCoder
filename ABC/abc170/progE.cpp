#include<bits/stdc++.h>
using namespace std;

int main(){

  int N,Q;
  cin >> N >> Q;

  vector<pair<int,int>> child(N);//child[i]={rateと部屋番号}
  map<int,multiset<int>> room;
  vector<int> out;

  int roomNum,rate;
  for(int i=0;i<N;i++){
    cin >> rate >> roomNum;
    child[i]=make_pair(rate,roomNum);
    room[roomNum].insert(rate);
  }

  multiset<int> MAX_rate;
  for(auto st:room){
    auto itr = st.second.end();
    itr--;
    MAX_rate.insert(*itr);
  }

  int index,moveRoom;
  pair<int,int> P;
  for(int i=0;i<Q;i++){
    cin >> index >> moveRoom;index--;//c=子供のindex d=roomNum
    P = child[index];//rateと部屋番号
    int childRate = P.first;
    int childRooom = P.second;
    child[index].second = moveRoom;

    //移動前roomの変更
    auto itr=room[childRooom].end();
    itr--;
    //移動前roomの最大値の場合
    if(childRate==*itr){
      MAX_rate.erase(MAX_rate.find(childRate));
      room[childRooom].erase(room[childRooom].find(childRate));
      if(room[childRooom].size()==0){
        room.erase(childRooom);
      }else{
        itr=room[childRooom].end();
        itr--;
        MAX_rate.insert(*itr);
      }
    }else{
      room[childRooom].erase(room[childRooom].find(childRate));
    }

    if(room[moveRoom].size()==0){
      room[moveRoom].insert(childRate);
      MAX_rate.insert(childRate);
    }else{
      //移動後roomの変更
      itr=room[moveRoom].end();
      itr--;
      //移動後roomの最大値になる場合（めんどい）
      if(childRate>*itr){
        MAX_rate.erase(MAX_rate.find(*itr));
        MAX_rate.insert(childRate);

        room[moveRoom].insert(childRate);
      }else{
        room[moveRoom].insert(childRate);
      }
    }


    itr=MAX_rate.begin();
    //cout << *itr << endl;
    out.push_back(*itr);
  }

  for(auto u:out){
    cout << u << endl;
  }
}




/////////////////
/*
setの最後の要素は
auto itr = set.end();
itr--;
auto last = *itr;



multisetのeraseは慎重に
multiset.erase(num)だとnumがすべて消える
１つだけ消す場合は、
multiset.erase(multiset.find(num))
でポインタを１つだけ渡して消す
*/
//////////////////
