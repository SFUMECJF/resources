#include<iostream>

using namespace std;
/*_false  _flase   _true  _   _   _   _    _   _   _
 *   a
 * 1~n    n个数字
 * m  m < n
 * n - m
 */
// 费曼学习法，讲出来你学的东西。
bool n_occur[100005] = {false};
//int n_occur[3] = {1, 3, 4};
// 1.  使用一个bool型的数组判断，下标对应的数字，是否在m次输入中出现过
// 2. 同时，这样的数组，比较大，超过10 0000的，建议定义在main函数外头。
// 3. 每次定义建议初始
// n_occur[0]
int main() {
  int n, m;
  cin >> n >> m;
  //  数据储存的问题   程序：  数据结构  +  算法
  //  n  个数字，   每一次输入了m，是不是就表示这n个数字里，这次输入的这个m不是缺失的。
  //  使用一个bool型数组
  //1  2  3    1~3  3次
  // for (int i = 0; i < m; i++)  for (int i = 1; i <= m; i++)  都是m次
  for (int i = 1; i <= m; i++) {
    int a;
    cin >> a;
    n_occur[a] = true;
  }
  //n_occur  100005  0  ~ 100004  false   m  个变成了true
  //  1  ~   n   之间，有m个下标对应的数据变成了true
  //  n之后的，没有改变。
  for (int i = 1; i <= n; i++) {

    if (n_occur[i] == true) {
    }
    else if (n_occur[i] == false) {
      cout << i << endl;
    }

  }





}



#include<bits/stdc++.h>
//using namespace std;
//int n;
//bool flag[100010] = {false};
//int main() {
//  cin >> n;
//  int a;
//  for (int i = 1; i <= n; i ++) {
//    cin >> a;
//    flag[a] = true;
//  }
//  for (int i = 1; i <= n; i ++) {
//    if (!flag[i]) {
//      cout << i << endl;
//    }
//  }
//  return 0;
//}
//
