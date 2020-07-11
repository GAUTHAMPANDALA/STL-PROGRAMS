// STL INTRODUCTION IN C++

// STL: STANDARD TEMPLATE LIBRARY
// IT HAS :  1. ITERATORS : different types ad based on the container.
//           2. CONTAINERS : this stores the data. eg: vector,array,linkedlist,map,set.
//			3. ALGORITHMS. : these are general algorithms already in the STL eg: sort,search,reverse,permutation etc.



//  Topic:  STL ARRAY
// Syntax: STD::array<T, Size> array_object; here T is same as in datatype. ie, same as datatype  array_object[n];

// STD:: array: this is the container of the fixed size eleemnts, ie(a[n]).
// Here when we pass to function, we acctually passing the form of pass by value (copy of array) 
//and we are not passing pointer of array, so size is found easily.
// This has following 
	// 		1.  at() -->  prints array_obj.at(3) is same as a[3].
	//      2.  []   -->  same as  a[] in arrays.
	//      3.  front() --> gives first element
	//      4.  back()  --> gives last element.
	//		5.  data() --> gives acces to address of array which is inside stl array (or) returns pointer of array insede array_class.
	//      6.  fill(n) --> this fills the number n to whole array.
// .at() gives array out of index exception but [] gives garbage value.
	
	
#include<iostream>
#include<array>

using namespace std;

int main()
{
	std::array<int, 5>  a; // ddeclaring 1st array.
	std::array<int, 6>  b {1,2,3,5,6,4};  //  uniform inistialling.
	std::array<int, 7>  c; // declaring 2nd array.
	
	a={1,2,23,4,5};   // intialising list

	c.fill(10); //  initialising number 10 to array.
	
	cout<<"The element at 3th index of array a.at(3) is: "<<a.at(3)<<endl;
	cout<<"The element at 4th index of array b[5] is: "<<b[5]<<endl;
	cout<<"The element at 1th index of array c.front() is: "<<c.front()<<endl;
	cout<<"The element at last index of array a.end() is: "<<a.end()<<endl;	
	return 0;
	
}
