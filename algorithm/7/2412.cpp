//
// Created by YMXD on 2021/5/31.
//
//1. 最简单做法，10分钟内
//2.

#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;
  for(int i = 1; i <= N; i++) {

    for (int j = 1; j <= i; j++) {
      cout << j << "*" << i << "=" << i * j << " ";
    }
    cout << endl;
  }
}



