//
// Created by YMXD on 2021/4/12.
//
//#include <bits/stdc++.h>

#include <iostream>
#include <algorithm>//这个头文件里定义了replace()函数
using namespace std;

int find_value(string test_array, char value) {
  for(int i = 0; i < test_array.length(); i++) {
    if(test_array[i] == value) {
      return i;
    }
  }
  return -1;
}

int main () {
  string origin_string;
  cin >> origin_string;
//  // 方法一   建立数字字符串，通过2148的方法进行判断。
    string number = "0123456789";
//  for(int i = 0; i < origin_string.length(); i++) {
//    if(find_value(number, origin_string[i]) != -1) cout << "*";
//    else cout << origin_string[i];
//  }
  // 方法2   用replace
//  string test = "avcde1q";
//  cout << test;
//  replace(test.begin(),test.end(), 'a', '1');
//  cout << test;
    for(int i = 0; i < 10; i++) {
      replace(origin_string.begin(), origin_string.end(), number[i], '*');
    }
    cout << origin_string;
}
