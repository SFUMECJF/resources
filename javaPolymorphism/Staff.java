
public class Staff {
	//  void 空类型，函数不返回值
	//static  non-static
	//对于主函数来说，static才可以运行
	//对于主函数调用的其他类的区别。
	// 如果是static类型的，用类名调用。   函数和属性的static属性要对应
	//  如果不是static，用实例调用
	public static void main (String args[]) {
		Test.ope();
		Test.ope();

		Test test = new Test();
		test.op();
//		test.b;
		Math.abs(-1);
		//

		System.out.println ("Hello, World!");


		StaffMember[] staffList;
		staffList = new StaffMember[6];
		// 基类定义，赋值用继承来的类。
		staffList[0] = new Executive ("Sam", "123 Main Line",
		 "555-0469", "123-45-6789", 2423.07);


		StaffMember staffMember = new StaffMember("Sam", "123 Main Line", "555-0469");
		System.out.println (staffMember);
		//java里的每个类都有默认的toString函数，我们不写，重载，默认输出地址。我们重载后就输出我们写的内容。
//		System.out.println (staffMember.toString());
//		System.out.println (staffMember.pay());
//		return 0;
	}
}


////********************************************************************
//// Staff.java Author: Lewis/Loftus
////
//// Represents the personnel staff of a particular business.
////********************************************************************
//
//
////           staff
////    |                |
////   employee     volunteer
////     |      |
////  hourly  excutive
//public class Staff
//{
// //-----------------------------------------------------------------
// // Sets up the list of staff members.
// //-----------------------------------------------------------------
//	public static void main (String args[]) {
//	StaffMember[] staffList;
//	staffList = new StaffMember[6];
//	staffList[0] = new Executive ("Sam", "123 Main Line",
//		 "555-0469", "123-45-6789", 2423.07);
//}
////	 public static void main(String args[])
////	 {
//
//
//
////		 staffList[1] = new Employee ("Carla", "456 Off Line",
////		 "555-0101", "987-65-4321", 1246.15);
////		 staffList[2] = new Employee ("Woody", "789 Off Rocker",
////		 "555-0000", "010-20-3040", 1169.23);
////		 staffList[3] = new Hourly ("Diane", "678 Fifth Ave.",
////		 "555-0690", "958-47-3625", 10.55);
////		 staffList[4] = new Volunteer ("Norm", "987 Suds Blvd.",
////		 "555-8374");
////		 staffList[5] = new Volunteer ("Cliff", "321 Duds Lane",
////		 "555-7282");
////		 ((Executive)staffList[0]).awardBonus (500.00);
////		 ((Hourly)staffList[3]).addHours (40);
//// //-----------------------------------------------------------------
//// // Pays all staff members.
//// //-----------------------------------------------------------------
////		 double amount;
////		 for (int count=0; count < staffList.length; count++)
////		 {
////			 System.out.println (staffList[count]);
////			 amount = staffList[count].pay(); // polymorphic
////			 if (amount == 0.0)
////				System.out.println ("Thanks!");
////			 else
////				System.out.println ("Paid: " + amount);
////			 System.out.println ("-----------------------------------");
////		}
////	 }
//}