//
// Created by YMXD on 2021/3/23.
#include<bits/stdc++.h>
//#include <staff_member.h>
using namespace std;

class StaffMember {
 protected:
  string name;
  string address;
  string phone;

 public:
  string toString(){
    string result = "Name: " + name + "\n";
    result += "Address: " + address + "\n";
    result += "Phone: " + phone;
    return result;
  }
  double pay(){
    return 0.0;
  }
//  StaffMember (){};
  StaffMember (string eName, string eAddress, string ePhone){
    name = eName;
    address = eAddress;
    phone = ePhone;
  }

};


int main() {
  //使用这里，可以用new.
  StaffMember staff_member("name", "address", "phone");
  cout << staff_member.toString();
//  cout << staff_member.name;
//  String a = "fido";
  //cout << staff_member.pay();
  return 0;
}
//

