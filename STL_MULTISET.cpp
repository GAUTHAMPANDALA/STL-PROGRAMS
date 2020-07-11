// Topic: Multi set


// Syntax: std::multiset<datatype> object_name;

// 1. MULTISET: This is a associative container that has sorted set of duplicate elements of type key.
// 2. Associative containers: we associate the data in containers eg: set, map,multi set, multi map.
// 3. It is used to implement RedBlackTrees
// 4. Insert, Removal, Search have logarthemic complexity which is same as in trees.
// 5. we can define order for sorting in set.
// 6. if we want to store user defined dataype(structure,uniouns,classes) in multiset then we will have to provide
//    compare function so that set can store them in sorted order. default--> asc.
// 7. Sets ussaually store the duplicate datas/ multiple eleemnts of same value ans store in sorted order.



#include<iostream>
#include<set>
#include<string>

using namespace std;

int main()
{
	std::multiset<int> multiseta={1,2,3,4,5,1,2,3,4,5};
	std::multiset<int, std::greater<int>> multisetb={8,6,5,4,4,4,5,5,7,9,3,2,1}; 
	cout<<"The set a is as: ";
	// iterator for printing.
	for(const auto& e: multiseta)
	{
	   cout<<e<<endl;	
	}
	cout<<"The set B is as: ";
	// iterator for printing.
	for(const auto& e: multisetb)
	{
	   cout<<e<<endl;	
	}
	return 0;
}
