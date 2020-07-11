// TOPIC: UNORDERD MULTIMAP IN STL.

//SYNTAX: std::unordered_multimap<datatype>  objectname;

// 0. Unordered multimap is an unordered associative container that supports equivalent keys 
//	  (an unordered_multimap may contain multiple copies of each key value) and that associates values of another type with the keys. 
// 1. Search, insertion, and removal have average constant-time complexity.
// 2. Internally, the elements are organized into buckets.
// 3. It uses hashing to insert elements into buckets. 
// 4. This allows fast access to individual elements, since once a hash is computed,
//    it refers to the exact bucket the element is placed into.


// WHY UNORDERED_MAP
// 0. maintain a collection of uniqe {key:value} pairs with fast insertion and removal.
// 1. This is not unique and not  sorted on key basis.
// 2. THis groups same key pairs into one bucket.


#include<iostream>
#include<unordered_map>

using namespace std;

int main()
{
	std::unordered_multimap<int, char> ummap={{2,'h'},{3,'g'},{5,'d'}};
	ummap.insert({1,'a'});
	ummap.insert(std::pair<int,char>(2,'b'));
	ummap.insert(std::make_pair(3,'c'));
	ummap.insert(std::make_pair(3,'c'));
	
	for(auto &elm: ummap){
		cout<<elm.first<<" "<elm.second<<endl;
	}
	
	return 0;
	
}
