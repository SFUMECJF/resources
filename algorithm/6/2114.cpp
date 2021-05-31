#include <iostream>
using namespace std;

//  问题 ：无法输出，就根本没输出。
//1. cout 输出语句没写
//2. 在满足什么条件下输出，这个条件不对。去看条件，和题目逻辑对应。
//
//建议一点点写。
//
int n_occur[100005] = { 0 };

int main() {
  int n, m;

  cin >> n >> m;
  for (int i = 1; i <= m; i++) {
    int a;
    cin >> a;
    n_occur[a] = n_occur[a] + 1;

  }

  for (int i = 1; i <= n; i++) {
    if (n_occur[i] > 1)
      cout << i << " " << n_occur[i] << endl;
  }
}



////#include<bits/stdc++.h>
//using namespace std;
//int n;
//int map[100010];
//int main() {
//  cin >> n;
//  memset(map, 0, sizeof(map));
//  int a;
//  for (int i = 1; i <= n; i ++) {
//    cin >> a;
//    map[a] ++;
//  }
//  for (int i = 1; i <= n; i ++) {
//    if (map[i] > 1) {
//      cout << i << " " << map[i] << endl;
//    }
//  }
//  return 0;
//}
