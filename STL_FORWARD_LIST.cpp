// TOPIC: FORWARD LIST In STL

// SYNTAX: forward_list<datatype> object_name;

// This is the single linked list and known as forward list because of the single pointer 
// we can traverse in forward direction so called as the forward linked list.
// This has the bunch of available functions.
// Few Available functions:
// 			operator =,assign,front,rear,empty,max_size,clear,insert_ater,emplace_after,reverse,sort,merge
//			splice_after, unique, remove,remove_if,resize.
#include<iostream>
#include<forward_list>

using namespace std;

int main()
{

forward_list<int> list1={1,5,6,4,2};    // operator.
forward_list<int> list2={11,55,6363,204,332};
forward_list<int> list3;
forward_list<int> list4={1,1,45,20,32,55,9,9,8,7,5,6};

int n,value;
cout<<"Enter the number of eleemnts and value: "<<endl;
cin>>n>>value;
list3.assign(n,value);  // create the list of n eleemts with data of value.

cout<<"The newly inserted elements in,list3 will be : "<<endl;
for(auto &elm: list3) // iterator to print the linked list.
{
	cout<<elm<<endl;
}

cout<<"The head of list1 is: "<<" "<<list1.front()<<endl; 



list2.insert_after(list2.begin(),value); // this inserts the value after list2 head element.
cout<<"The newly inserted element in,list usng insert_after will be : "<<endl;
for(auto &elm: list2) // iterator to print the linked list.
{
	cout<<elm<<endl;
}


list1.emplace_after(list1.begin(),value); // this inserts the value after list2 head element.
cout<<"The newly inserted element in,list using emplace_after will be : "<<endl;
for(auto &elm: list1) // iterator to print the linked list.
{
	cout<<elm<<endl;
}


cout<<"The reversed list of list1 is: "<<endl;
list1.reverse();
for(auto &elm: list1) // iterator to print the linked list.
{
	cout<<elm<<endl;
}


cout<<"The sorted list of list2 is: "<<endl;
list2.sort();
for(auto &elm: list2) // iterator to print the linked list.
{
	cout<<elm<<endl;
}


cout<<"The moving of list 2 eleemnts to list1 at position begin by splice after function a: "<<endl;
list1.splice_after(list1.begin(),list2); // the eleemnts in list-2 will be moved into list-1 at position after list-1 head.											
for(auto &elm: list1) // iterator to print the linked list.
{
	cout<<elm<<endl;
}
cout<<"The size of list 2 after moved to list 1 is: "<<" "<<std::distance(list2.begin(),list2.end())<<endl;



cout<<"The merge of list3 and list2 is: "<<endl;
list2.merge(list3); // this makes elemnts of list3 appear first and then list 2 elemnts.
for(auto &elm: list2) // iterator to print the linked list.
{
	cout<<elm<<endl;
}

cout<<"The elemenys in list 4 is: "<<endl;
for(auto &elm: list4) // iterator to print the linked list.
{
	cout<<elm<<endl;
}
cout<<"The unique elements in list 4 using unique function is: "<<endl;
list4.unique(); // this removes duplicate elements of an element.
for(auto &elm: list4) // iterator to print the linked list.
{
	cout<<elm<<endl;
}

cout<<"The elelemnt removed from list 4 "<<value<<endl;
list4.remove(value);
for(auto &elm: list4) // iterator to print the linked list.
{
	cout<<elm<<endl;
}

cout<<"The elements removed here will be based on condition using function remove_if : "<<endl;
list4.remove_if([](int n) {
return n>4;
});
for(auto &elm: list4) // iterator to print the linked list.
{
	cout<<elm<<endl;
}	


return 0;
	
} 

