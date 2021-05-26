//
// Created by YMXD on 2021/3/28.
//
#include<iostream>
#include <assert.h>
using namespace std;

//value = 9;// 1  9    2 8   9 % 2 1
//24 = 3 X 8
// 23 4.7  2, ,3 4,
bool is_prime(int value) {
     for(int i = 2; i * i <= value; i++) {
       if(value % i == 0)
         return false;
     }
     return true;
}

int max_primer_factor(int value) {
  for(int i = value; i >= 2; i--) {
    if(value % i == 0 && is_prime(i)) {
      return i;
    }
  }
}

int main() {
  int m, n;
  cin >> m >> n;
  // ++i -->  i = i +1 ; i
  // i++      i;   i = i+1
  //a = {0,1,2}
  //i = i+1; a[i]
  // i =0;  a[i] = a[0]  a[i++] = 0        a[++i] = 1
  assert(is_prime(5) == true);
  assert(is_prime(9) == false);
  assert(max_primer_factor(5) == 5);
  for (int i = m; i <= n; ++i) {
    cout << max_primer_factor(i) << " ";
  }
  return 0;
}
