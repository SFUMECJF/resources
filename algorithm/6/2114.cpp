#include<bits/stdc++.h>
using namespace std;
int n;
int map[100010];
int main() {
  cin >> n;
  memset(map, 0, sizeof(map));
  int a;
  for (int i = 1; i <= n; i ++) {
    cin >> a;
    map[a] ++;
  }
  for (int i = 1; i <= n; i ++) {
    if (map[i] > 1) {
      cout << i << " " << map[i] << endl;
    }
  }
  return 0;
}
