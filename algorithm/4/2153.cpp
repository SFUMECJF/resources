#include <bits/stdc++.h>
using namespace std;

int main() {
  string str1, str2;
  cin >> str1 >> str2;
  // int a = 1; b = 4' a < b == true   c++对于字符串之间的大小也有定义 ，按照字典序定义。
  // 建议用string相关的函数以及操作
//  if(str1 < str2) cout << "YES";
//  else cout << "NO";
//  avcd    aaa
for(int i = 0; i < min(str1.length(), str2.length()); i++ ) {
  比较  str1[i]  str2[i]
  <   cout  return
  >   cout  return
  =    不操作，继续下一个循环

}

}

//长度更长的更大