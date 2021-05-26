//
// Created by YMXD on 2021/4/24.
//

#ifndef CLASS_OBJECT__STAFF_MEMBER_H_
#define CLASS_OBJECT__STAFF_MEMBER_H_
#include <iostream>
using namespace std;
class StaffMember // 圆形类：声明部分，即声明成员  int long
{
 protected:
  string name;
 string address;
 string phone;

 public:
  StaffMember (string eName, string eAddress, string ePhone);
  string tostring();
  double pay();
};

#endif //CLASS_OBJECT__STAFF_MEMBER_H_
