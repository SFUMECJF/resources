#include<bits/stdc++.h>
using namespace std;

//  船
//  5  月  22 号，8月 10 份， 跟上进度。
//  我给同学 把

class BoatName {
 public:
  int total_weight = 0;
  int current_weight = 0;
  bool customer[22] = {false};
  int max_weight = 0;
};

// 14   4  10


int main()
{
  BoatName boat;
  int customer_weight[21] = {0};
  int n, m;
  cin >> n >> m >> boat.total_weight;
  for (int i = 1; i <= n; i++) cin >> customer_weight[i];// 1  - n

  for (int i = 0; i < m; i++) {
    int operator_num = 0;
    cin >> operator_num;

    if (boat.customer[operator_num] == false) {
      boat.customer[operator_num] = true;
      boat.current_weight += customer_weight[operator_num];
      //
      if (boat.max_weight < boat.current_weight) boat.max_weight = boat.current_weight;
    }
    else {
      boat.customer[operator_num] = false;
      boat.current_weight -= customer_weight[operator_num];
    }
    if (boat.current_weight > boat.total_weight) {
      cout << "Oh, My God!";
      return 0;
    }
  }

  cout << boat.max_weight;

//  int a[21],b[21]={0};//b[]判断顾客是否在船上
//  int n,m,w,current_weight=0,max_weight=0,ck;
//  cin>>n>>m>>w;// n代表游客数量，m次上下船操作，w船的总重量
//
//  for(int i=1;i<=n;i++) cin>>a[i];
//
//  for(int i=1;i<=m;i++)
//  {
//    cin>>ck;
//    if(b[ck]==0) {current_weight=current_weight+a[ck];b[ck]=1;}//如果顾客在船上，添加重量
//    else {current_weight-=a[ck];b[ck]=0;}//如果顾客不在船上，减重量
//    if(max_weight<=current_weight) max_weight=current_weight;
//    if(current_weight>w) { cout << "Oh, My God!"; return 0;}
//  }
//  cout<<max_weight;
//  return 0;
}
