////#include <bits/stdc++.h>
//#include <iostream>
//using namespace std;
//
//int main () {
////  string dictionary_normal = "abcdefghijklmnopqrstuvwxyz";//','  '!'
////  cout << dictionary_normal << endl;//所有的字符都是由数字实现的，背后都是一个数字。\
////  // 只不过，我们想把它当作数字来用的时候。
////  cout << dictionary_normal[0] << endl;
////  cout << (int) dictionary_normal[0];
////  cout << (char) 97;
////  char map_dictionary[300];
////  map_dictionary[97] = 'x';
////  cout << map_dictionary[97];
////  cout << map_dictionary[dictionary_normal[0]];
////  //return 0;
//
//
//  string dictionary;
//  int n;               // apple  banana
//  cin >> dictionary;//uvwxyzabcdefghijklmnopqrst
//  cin >> n;//n就是输入几次查询。
//  string dictionary_normal = "abcdefghijklmnopqrstuvwxyz";
//  char map_dictionary[300];//map_dictionary[1] map_dictionary[0]  map_dictionary[299]
//  // 'a' 也是一个数字。
//  int location[300];
//  for (int i = 0 ; i < 26; i++) {
//    //map_dictionary[ dictionary[i] ] = dictionary_normal[i];
//    //dictionary[i] -->  i
//    //a-->6
//    location[ dictionary[i] ] = i;
//  }
//// location[ 'a' ]
//for (int i = 0; i < n; i++)
//{
//  string str1,str2;
//  cin >> str1 >> str2;
//  //  str1   apple  67715
//  //          banana  34217
//  for (int j = 0; j < str1.length(); j++) {
//    str1[j] = location[ str1[j] ];
//  }
//  for (int j = 0; j < str2.length(); j++) {
//    str2[j] = location[ str2[j] ];
//  }
//  if(str1 < str2) cout << "green" << endl;
//  else cout << "red"<< endl;
//}
//
////  for (int i =0; i < n; i++) {
////    string str1,str2;
////    cin >> str1 >> str2;
////    for(int j = 0; j < str1.length(); j++) {
////      str1[j] = map_dictionary[str1[j]];
////      cout << str1<<endl;
////    }
////    for(int j = 0; j < str2.length(); j++) {
////      str2[j] = map_dictionary[str2[j]];
////    }
////
////    if(str1 < str2) cout << "green" << endl;
////    else cout << "red"<< endl;
////
////  }
//}

#include<iostream>
using namespace std;


int main() {
  string dictionary;
  int n;
  cin >> dictionary;
  cin >> n;
  string dictionary_normal = "abcdefghijklmnopqrstuvwxyz";
  char map_dictionary[300];
  for (int i = 0; i < 26; i++) {
    map_dictionary[dictionary[i]] = i;

  }
  for (int j = 0; j < n; j++) {
    string str1;
    string str2;
    cin >> str1 >> str2;
    for (int i = 0; i < str1.length(); i++) {
      str1[i] = map_dictionary[str1[i]];

    }
    for (int i = 0; i < str2.length(); i++) {
      str2[i] = map_dictionary[str2[i]];
    }

    if (str1 < str2) {
      cout << "green";
    }
    else cout << "red";


  }
}
