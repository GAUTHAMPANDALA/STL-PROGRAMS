// TOPIC: UNORDERD MULTISET IN STL.

// Syntax: std:unorder_multiset<datattype> object_name;

// 0. std::unordered_multiset is an associative container that contains set of possibly non-unique objects.
// 1. Search, insertion, and removal have average constant-time complexity.
// 2. Internally, the elements are organized into buckets.
// 3. It uses hashing to insert elements into buckets. 
// 4. This allows fast access to individual elements, because after computing the hash of the value it refers to 
//   the exact bucket the element is placed into.
// 5. The output wil not be same as input order, because we dont know which buccket contains what type of values.
//	  so, the output order is not particullary defined.

// WHY UNORDERED_MULTISET
// 0. maintain a collection of non-uniqe items with fast insertion and removal.

// This is not unique nd not sorted, sorting in form of buckets so no sort order.

#include<iostream>
#include<unordered_set>

using namespace std;
int main ()
{
	std::unordered_multiset <int> umset ={4,1,2,3,9,4,3,2,9,8,10};
	
	auto search= umset.find(2);
	
	if(search!= umset.end()){
		cout<<"Found :" <<(*search)<<"\n";
	}
	else{
		cout<<"Not Found"<<endl;
	}
	//	  The output wil not be same as input order, because we dont know which buccket contains what type of values.
	//	  so, the output order is not particullary defined.
	// The same elements are pushed into one bucket.
	for(auto &elm: umset){
		cout<<elm<<" ";
	}
	cout<<endl;
	
   int key;
   cout<<"Enter the key elements to find its: count:  "<<endl;
   cin>>key;
   cout<<"The number "<<key<<" repeated"<<" "<<umset.count(key)<<" "<<"Times"<<endl;
   
   
 return 0;	
}
