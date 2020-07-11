// Topic: VECTORS

// syntax:  std::vector<datatype>  vector_object();
//  std:vector --> This is the sequence container which is same as arraylist of dynamic array, used when hen we dont know size and fast access.
//  Its size is dynamic as to grow or shrink.

// Elements can be accesed:  at(), front(), back(), [], data() --> returns pointer of array in vector class.


// Modifiers used are : 
   //  1. insert() --> inserts the new element sequentially,
   //  2. emplace(pos, eleemnet) --> insert element at position
   //  3. push_back() -->  this function doubles the array size dynamically when the intial array elemnts are being filled 
   // 4. emplace_back(pos, eleemnt) --> deletes eleemnts at given position.
   // 5. pop_back()   -->  this deletes the last element of vector.
   // 6. resize() -->  resize vector 		7. swap() --> swaps two vectors.    8. erase() --> earese the data. 
   // 9. clear() --> clears/ rempoves all elemnts in vector from memory.

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	std::vector<int> a;
	std::vector<int> b (6,20); // b(n,m) means (n= size_of_vector, m=value_to_be_placed_in_vector).
	std::vector<int> c = {1,2,3,6,2,0};  // initializer list
	std::vector<int> d {1,2,3,4,5,5,20}; // uniform initialisation.
		
	b[3]=12;
	b.at(4)=15;
	// this function doubles the array size dynamically when the intial array elemnts are being filled and no place for others to insert..
	// ie, if insert 10 --> size=1, insert 20 --> size =4(1*2), after inserting all 3 elemnts then to insert 6th elemnt --> size is 6(3*2).
	a.push_back(10); 
	a.push_back(50); 
	cout<<"The size of array is: "<<a.size()<<endl;
	cout<<"The size of array is: "<<b.size()<<endl;
	cout<<"The size of array is: "<<c.size()<<endl;
	cout<<"The size of array is: "<<d.size()<<endl;
	return 0;
}
