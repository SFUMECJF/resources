//package staffclass;
//********************************************************************
// StaffMember.java Author: Lewis/Loftus
//
// Represents a generic staff member.
//********************************************************************
//abstract public class StaffMember
public class StaffMember
{
	//  abstract表示无法使用，只有继承后才可以使用。
	//  public是所有的调用都可以使用
	//  protected是只有类
	//private
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

	public String testString()
	{

		return "result";
	}
	 //-----------------------------------------------------------------
	 // Derived classes must define the pay method for each type of
	 // employee.
	 //-----------------------------------------------------------------
 	public  double pay(){
	 	return 0.0;
	};//抽象类
} //  找到StaffMember类里面有几个变量，分别是protected,private还是public，分别代码什么意思。
//  函数      功能是什么，类型是什么。