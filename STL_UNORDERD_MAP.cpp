// TOPIC: UNORDERD MAP IN STL.

//SYNTAX: std::unordered_map<datatype>  objectname;

// 0. std::unordered_map is an associative container that contains key-value pairs with unique keys.
// 1. Search, insertion, and removal have average constant-time complexity.
// 2. Internally, the elements are organized into buckets.
// 3. It uses hashing to insert elements into buckets.But MAP is build using REDBLACK Tree.
// 4. This allows fast access to individual elements, because after computing the hash of the value it refers to 
//   the exact bucket the element is placed into.

// WHY UNORDERED_MAP
// 0. maintain a collection of uniqe {key:value} pairs with fast insertion and removal.
// 1. This is unique and not  sorted on key basis.

#include<iostream>
#include<unordered_map>

using namespace std;

int main()
{
	std::unordered_map<int, char> umap={{2,'h'},{3,'g'}};
	// Access
	
	cout<<umap[1]<<endl;
	cout<<umap[2]<<endl;
	
	//update the value at key
	int n;
	char ch;
	cout<<"Enter the key position where the   data to updated : "<<endl;
	cin>>n>>ch;
	umap[n]=ch;
	
	//iterate
	for(auto &elm: umap){
		cout<<elm.first<<" "<<elm.second<<" ";
	}
	cout<<endl;
	
	//find
	auto result = umap.find(2);  // this is pointer that points the object.
	if(result!=umap.end()){
		cout<<"Found "<<result->first<<" "<<result->second<<'\n';
	}
	else{
		cout<<"Not Found"<<endl;
	}
	
	return 0;
}


