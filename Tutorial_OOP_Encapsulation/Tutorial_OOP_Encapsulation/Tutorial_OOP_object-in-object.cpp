//#include<iostream>
//using std::cout;
//using std::endl;
//using std::string;
//
//class Phone
//{
//public:
//	Phone() {
//		cout << "Constructor without variables\n";
//	}
//
//	Phone(string pName, string num)
//	{
//		cout << "Phone Constructor" << endl;
//		m_Brand = pName;
//		number = num;
//	}
//
//	~Phone()
//	{
//		cout << "Phone Destructor" << endl;
//	}
//
//	string m_Brand;
//
//	string number;
//};
//
//class Person7
//{
//public:
//	Person7(string name, string pName, string number): m_Name(name), m_Phone(Phone(pName, number))
//	{
//		//m_Name = name;
//		//m_Phone = Phone(pName, number);
//		cout << "Person Constructor" << endl;
//	}
//
//	~Person7()
//	{
//		cout << "Person Destructor" << endl;
//	}
//
//	string m_Name;
//
//	// Member instance will be instantiated first, destroyed after
//	Phone m_Phone;
//};
//
//void test00001()
//{
//	Person7 p("William", "iPhone 12", "123");
//	cout << p.m_Name << endl;
//	cout << p.m_Phone.m_Brand << endl;
//	cout << p.m_Phone.number << endl;
//}
//
//
//
//int main10()
//{
//	test00001();
//
//	system("pause");
//
//	return 0;
//}