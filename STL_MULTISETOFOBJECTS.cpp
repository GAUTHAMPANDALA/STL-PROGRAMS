// Topic:  MULTISET CLASS OBJECTS

// Syntax: std::multiset<class_name, std::sort_order<class_name> (greater,less)> object_name;
// The operator definition is needed for userdefined datatypes and it is nessecary for set implentation of userdefined datatypes.
//operator symbol defenition syntax : bool operator "operator_symbol" (const classname& object_name) const {return_parameter;};
// Here the classname can be --> structue name, template name and other user defined datatypes name.

// This is for the set of objects, this is beacuase it is different when comparing 2 objects than  2 integers.

#include<iostream>
#include<set>

#include<string>

using namespace std;

class person{
	
	public:
		int age;
		string name;
	// This is the operator used to compare the objects based on the object_parameter.	
	// these functions defines the symbols.
	// syntax: bool operator "operator_symbol" (const classname& object_name) const {return_parameter;};
	bool operator <(const person& rhs) const {return age<rhs.age;};  // this sorts object data according to age in ascending order.
	bool operator >(const person& rhs) const {return age>rhs.age;};  // this sorts object data according to age in decesdingorder.
};

int main()
{
	std::multiset<person> seta={{45,"ramesh"},{65,"vinay"},{85,"ajay"},{35,"kamal"},{35,"kamal"}};
	std::multiset<person, std::greater<person>> setb={{45,"ramesh"},{65,"vinay"},{85,"ajay"},{35,"kamal"},{45,"ramesh"}};
	cout<<"The set a will be ascending order is as: "<<endl;
	// iterator for printing.
	for(const auto& e: seta)
	{
	    cout<<e.age<<" "<<e.name<<" "<<endl;		
	}
	cout<<"The set b will be desecding order is as: "<<endl;
	// iterator for printing.
	for(const auto& e: setb)
	{
	    cout<<e.age<<" "<<e.name<<" "<<endl;		
	}
	return 0;
}
