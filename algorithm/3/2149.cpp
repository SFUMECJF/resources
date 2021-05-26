//
// Created by YMXD on 2021/4/1.
//

#include<bits/stdc++.h>
using namespace std;

int solve(string string1, string string2) {
  for (int i =0; i < string1.length(); i++) {
    int j = 0;
    for (; j < string2.length(); j++) {
      if (string1[i + j] != string2[j]) break;
    }
    if (j == string2.length()) {
      return i;
    }
  }
  return -1;
}

int main() {
  string string1, string2;
  cin >> string1;
  cin >> string2;
  cout << solve(string1, string2);
}