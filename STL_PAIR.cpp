// TOPIC: std::pair In c++

//Syntax: std:: pair<T1,T2> OBJECT_NAME; T1,T2 are datatypes, here pair is a dataype.

// std::pair is a struct template that provides a way to store two hetrogenous objects as a single unit.
// Map,Multimap,Unordered_map,unordered_multimap can use pair to insert data into their structures.

#include<iostream>
#include<vector>

using namespace std;

// printing function.
void print(std::pair<int,int>& obj) {
	cout<< obj.first<<" "<<obj.second<<endl;
}

int main()
{
	std::pair<int, int> obj(10,20);
	cout<<"The paired elements of obj1 are: "<<endl;
	print(obj);
	
	std::pair<int, int> obj1 = std::make_pair(100,290);
	cout<<"The paired elements of obj2 are: "<<endl;
	print(obj1);
	
	std::vector<std::pair<std::string,uint>> list; // vector of pair_dataype which has string and integer elements.
	list.push_back(make_pair("Rupesh",30));
	list.push_back(make_pair("cupesha",130));
	list.push_back(std::pair<std::string,int>("KAMAL",225));
	list.push_back(make_pair("bupesh",230));
	
	for(auto &elm: list)
	{
		cout<<elm.first<<" "<<elm.second<<endl;
	}
	return 0;
	
}
