// TOPIC: LIST

//SYNTAX: list<datatype> object_name;

// 1. This is double linked list what we know from C prgramming language.
// 2. List is sequence container that allow non-contiguous memory allocation.
// 3. List is faster compared to other sequence containers (vector, forward_list, deque) in terms of 
//   insertion, removal and moving elements in any position provided we have the iterator of the position. 
// 4. We should use this class instead of traditional double linked list because
//   a. Well tested
//   b. Bunch of available function
// 5. Few Available Operations
//   operator =, assign, front, back, empty, size, max_size, clear, insert, emplace, push_back, pop_back, push_front
//   pop_front, reverse, sort, merge, splice, unique, remove, remove_if, resize.

#include<iostream>
#include<list>

using namespace std;

int main()
{

list<int> list1={1,5,6,4,2};    // operator.
list<int> list2={11,55,6363,204,332};
list<int> list3;
list<int> list4={1,1,45,20,32,55,9,9,8,7,5,6};

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
cout<<"The tail of list2 is: "<<" "<<list1.back()<<endl;


list2.insert(list2.begin(),value); // this inserts the value at end of  list2 head element.
cout<<"The newly inserted element in,list usng insert_after will be : "<<endl;
for(auto &elm: list2) // iterator to print the linked list.
{
	cout<<elm<<endl;
}


list1.emplace(list1.begin(),value); // this inserts the values at begin of  list2 head element.
cout<<"The newly inserted element in,list using emplace will be : "<<endl;
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


cout<<"The moving of list 2 eleemnts to list1 at end using spilce: "<<endl;
list1.splice(list1.begin(),list2); // the eleemnts in list-2 will be moved into list-1 at begin of  list-1 head.											
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
// sill functions are 
// push_back() --> inserts ellement at end.
//pop_back()-->  removes the element at end.
// pop_front() --> removes element at front.
// push_front() --> inserts ellement at end.


return 0;
	
} 
