//
// Created by YMXD on 2021/4/1.
//

//  int a = 12;
// char a = 'a';
//  循环
// string 类型，  如何得到长度，如何通过for遍历。如何寻找。我们自己写一些类似的函数。



#include<iostream>
using namespace std;

//给函数 若干输入，函数内部对这些输入进行处理。最后输出我们自己diy的值。
int find_value(string test_array, char value) {
  for(int i = 0; i < test_array.length(); i++) {
    if(test_array[i] == value) {
      return i;
    }
  }
  return -1;
}

int main() {
//  char a = 'a';
//  string test_string = "Hello, World";
//  cout << a << endl;
//  cout << test_string;
//  cout << test_string[0];
string number = "123456789";
  int n;
  cin >> n;//使用字符数组储存连续的字符。
//  char array_char[10000] = {};
//  for (int i = 0; i < n; i++) {
//    cin >> array_char[i];
//  }
//  cout << array_char[0];
//  cout << array_char[1];
//  cout << array_char[2];
//  cout << array_char[3];

  string test_array;
  cin >> test_array;
  //cout << test_array;

  //cout << test_array.find('q');
  //test_array.
  char found_value;
  cin >> found_value;
  cout << find_value(test_array, found_value);
//  if(string::npos == test_array.find(found_value)) {
//    cout << -1;
//  }
//  else {
//    cout << test_array.find(found_value);
//  }


  return 0;
}