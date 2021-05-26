//********************************************************************
// StaffMember.java Author: Lewis/Loftus
//
// Represents a generic staff member.
//********************************************************************
abstract public class StaffMember
{
	 protected String name;
	 protected String address;
	 protected String phone;
	 //-----------------------------------------------------------------
	 // Sets up a staff member using the specified information.
	 //-----------------------------------------------------------------
	 public StaffMember (String eName, String eAddress, String ePhone)
	 {
		 name = eName;
		 address = eAddress;
		 phone = ePhone;
	 }
	 //-----------------------------------------------------------------
	 // Returns a string including the basic employee information.
	 //-----------------------------------------------------------------
	 public String toString()
	 {
		 String result = "Name: " + name + "\n";
		 result += "Address: " + address + "\n";
		 result += "Phone: " + phone;
		 return result;
	 }
	 //-----------------------------------------------------------------
	 // Derived classes must define the pay method for each type of
	 // employee.
	 //-----------------------------------------------------------------
	 public abstract double pay();//抽象类
} //  找到StaffMember类里面有几个变量，分别是protected,private还是public，分别代码什么意思。
//  函数      功能是什么，类型是什么。