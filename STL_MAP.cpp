// Topic: STL MAP.

// Syntax:1.  std::map <T1,T2, std::sort_order<datatype>> object_name; // T1 and T2 are dataypes for key and value.
//        2.  std::map<T1, vector<T2> , std::sort_order<datatype>> object_name;  // T1 and T2 are dataypes for key and value.

// MAP: This is the assocative contanier which stores based on the KEY
//      the key must be unique , or it will override the values. ie, keys unique and values can be duplicate.
// Used to implement self balance binary search trees
// It stores the key valued pairs base on keys (asc/desc).
// std::map is used to solve the dictionary problems

// Examples: Dictionary.
// This is unique and sorted on key basis.

#include<iostream>
#include<map>
#include<vector>
#include<string>

using namespace std;

int main()
{
	cout<<"General Map Implementation: "<<endl;
	std::map<string ,int> Map;
	Map["raju"]=1023658;
	Map["ravi"]=4569874;
	Map.insert(std::make_pair("roja",12456744));
	// iterator for printing.
	for(auto &el1:Map)
	{
		cout<<el1.first<<" "<<el1.second<<endl;
	}
	
	cout<<Map["ravi"]<<endl; //  accesing through [].
	
	cout<<"Vector and  Map Implementation: "<<endl;
	
	std::map<string ,vector<int>> Map2;
	Map2["raju"].push_back(1023658);
	Map2["ravi"].push_back(4569874);
	Map2["roja"].push_back(12456744);
	
	// first iterate to map.key and then itearate through vector for key value.
	for(auto &el1:Map2)    // Map2.first object is el1
	{
		cout<<el1.first<<endl;
		for(auto &el2: el1.second){     //  Map2.second ie el1.second  object is el2
			cout<<el2<<endl;
		}
	}
	return 0;
}
