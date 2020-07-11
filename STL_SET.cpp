// Topic:  SET

// Syntax: std::set<datatype, std::sort_order<datatype> (greater,less)> object_name;

// 1. SET: This is a associative container that has sorted set of unique elements of type key.
// 2. Associative containers: we associate the data in containers eg: set, map,multi set, multi map.
// 3. It is used to implement RedBlackTrees
// 4. Insert, Removal, Search have logarthemic complexity which is same as in trees.
// 5. we can define order for sorting in set.
// 6. if we want to store user defined dataype(structure,uniouns,classes) in set then we will have to provide
//    compare function so that set can store them in sorted order. default--> asc.
// 7. Sets ussaually store the unique datas ans store in sorted order.

// This is  unique and sorted. storing is in form of array/vector not in form of buckets.


#include<iostream>
#include<set>

#include<string>

using namespace std;

int main()
{
	std::set<int> seta={1,2,3,4,5,1,2,3,4,5};
	std::set<int, std::greater<int>> setb={8,6,5,4,4,4,5,5,7,9,3,2,1}; 
	cout<<"The set a is as: ";
	// iterator for printing.
	for(const auto& e: seta)
	{
	   cout<<e<<endl;	
	}
	cout<<"The set B is as: ";
	// iterator for printing.
	for(const auto& e: setb)
	{
	   cout<<e<<endl;	
	}
	return 0;
}
