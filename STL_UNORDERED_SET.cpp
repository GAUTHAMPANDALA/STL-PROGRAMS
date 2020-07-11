// TOPIC: UNORDERD SET IN STL.

// Syntax: std:unorder_set<datattype> object_name;

// 0. Unorder Set is a associative container that contains set of unique objects.
// 1. Search, insertion, and removal have average constant-time complexity.
// 2. Internally, the elements are organized into buckets.
// 3. It uses hashing to insert elements into buckets. 
// 4. This allows fast access to individual elements, since once a hash is computed, 
//    it refers to the exact bucket the element is placed into.

// We need this to maintain collection of unique items for insertiona dnremoval.

// This is  unique but not sorted. storing in form of bukets, so no sorting order.


#include<iostream>
#include<unordered_set>

using namespace std;
int main ()
{
	std::unordered_set <int> uset ={4,1,2,3,4,2,3};
	
	auto search= uset.find(2);
	
	if(search!= uset.end()){
		cout<<"Found :" <<(*search)<<"\n";
	}
	else{
		cout<<"Not Found"<<endl;
	}
		
	for(auto &elm: uset){
		cout<<elm<<" ";
	}
	cout<<endl;
 return 0;	
}
