
#include <iostream>
using namespace std;
#include "staff_member.h" // 声明类Circle
//********************************************************************
// StaffMember.cpp Author:
//
// Represents a generic staff member.
//********************************************************************
//-----------------------------------------------------------------
// Sets up a staff member using the specified information.
//-----------------------------------------------------------------
StaffMember :: StaffMember (string eName, string eAddress, string ePhone)
{
name = eName;
address = eAddress;
phone = ePhone;
}
//-----------------------------------------------------------------
// Returns a string including the basic employee information.
//-----------------------------------------------------------------
string StaffMember :: tostring()
{
  string result = "Name: " + name + "\n";
  result += "Address: " + address + "\n";
  result += "Phone: " + phone;
  return result;
}
//-----------------------------------------------------------------
// Derived classes must define the pay method for each type of
// employee.
//-----------------------------------------------------------------

