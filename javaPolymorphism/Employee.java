//********************************************************************
// Employee.java Author: Lewis/Loftus
//
// Represents a general paid employee.
//********************************************************************
public class Employee extends StaffMember
{
	 protected String socialSecurityNumber;
	 protected double payRate;

	 //-----------------------------------------------------------------
	 // Sets up an employee with the specified information.
	 //-----------------------------------------------------------------
	 public Employee (String eName, String eAddress, String ePhone,
	 String socSecNumber, double rate)
	 {
	 	//java中的 super 关键字super 可以用来调用直接父类方法。 super() 可以用于调用直接父类构造函数。
		 super (eName, eAddress, ePhone);
		 socialSecurityNumber = socSecNumber;
		 payRate = rate;
	 }
	 //-----------------------------------------------------------------
	 // Returns information about an employee as a string.
	 //-----------------------------------------------------------------
	 public String toString()
	 {
		 String result = super.toString();
		 result += "\nSocial Security Number: " + socialSecurityNumber;
		 return result;
	 }
	 //-----------------------------------------------------------------
	 // Returns the pay rate for this employee.
	 //-----------------------------------------------------------------
	 public double pay()
	 {
		return payRate;
	 }
}