// Topic: MULTIMAP

// Syntax:1.  std::multimap <T1,T2, std::sort_order<datatype>> object_name; // T1 and T2 are dataypes for key and value.
//        2.  std::multimap<T1, vector<T2> , std::sort_order<datatype>> object_name;  // T1 and T2 are dataypes for key and value.

// Multimap: This is the assocative contanier which stores based on the KEY
//          this support duplicate keys and stores values.
// Datatstructure uses will be redblack tree.
// count(),find(),contains(),equalrange(),lowerbound(), upperbound() are functions presented.
// This donot has at(),[] funtions.



#include<iostream>
#include<map>
#include<vector>

using namespace std;

int main()
{
	cout<<"General Multimap: "<<endl;
	std::multimap<char ,int> MultiMap;
	MultiMap.insert(make_pair('a',1));
	MultiMap.insert(make_pair('b',2));
	MultiMap.insert(make_pair('c',3));
	MultiMap.insert(make_pair('a',4));
	MultiMap.insert(make_pair('b',5));
	// iterator for printing.
	for(auto &el1: MultiMap)
	{
		cout <<el1.first<<" "<<el1.second<<endl;
	}
	// the syntax and procedure to  get all the values from a given key
	char ch;
	cout<<"Enter the key to search: "<<endl;
	cin>>ch;
	auto range=MultiMap.equal_range(ch);
	// The above code retuurns pair of multimap set  iterators as pointers ,ie internal code done by auto is 
	//  pair<multimap<char, int> :: iterator, multimap<char, int> :: iterator> range = multimap.equal_range(key);
	// this will be for functions, equal_range(), lower_bound(), upper_bound(), find()
	for(auto it=range.first; it!=range.second; it++ )
	{
		cout<< it->first<<" "<<it->second<<endl;
	}
	
	// Functions demonistration.
	cout<<"Funtions applied for the multimap are:"<<endl;
	cout<<"The number of values for key "<<ch<<" is: "<<" "<<MultiMap.count(ch)<<endl;
	cout<<"The boolean statement whether the value of key present in set is "<" "<<MultiMap.contains(ch)<<endl;
	
	auto rangefind=MultiMap.find(ch);
	auto rangelow=MultiMap.lower_bound(ch);
	auto rangeup=MultiMap.upper_bound(ch);
	cout<<"The any of value present in set  for key "<<ch<<" "<<rangefind->first<<" "<<rangefind->second<<endl;
	cout<<"The first inserted value for given key "<<ch<<"is: "<<" "<<rangelow->first<<" "<<rangelow->second<<endl;
	cout<<"The next to the latest  inserted value for given key "<<ch<<"is: "<<" "<<rangeup->first<<" "<<rangeup->second<<endl;
	
	
return 0;
}
	
