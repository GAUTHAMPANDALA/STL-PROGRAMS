// TOPIC: Deque in STL (Double ended queue)

// synatx: deque<datatype> object_name;

// 0. std::deque is an indexed sequence container.
// 1. It allows fast insertion at both beginning and end.
// 2. Unlike vector elements of deque are not stored contiguous.
// 3. it uses individual allocated fixed size array, with additional bookkeeping, meaning index based access to deque
//    must perform two pointer dereference, but in vector we get in one dereference.
// 4. The storage of a deque is automatically expanded and contracted as needed.
// 5. Expansion of deque is cheaper than expansion of vector., ie the internal array will be expanded and new array will nor be created any time.
//     unlike vector ne array creation, dequeue append the internal arrays of same size.
// 6. A deque holding just one element has to allocate its full internal array (e.g. 8 times the object size on 
//  64-bit libstdc++; 16 times the object size or 4096 bytes, whichever is larger, on 64-bit libc++).
// we need to have fixed size array other than vectross.
// This is the combinations of arrays, unlike vector which has only one big array.


// TIME COMPLEXITY:
//   Random access - constant O(1)
//   Insertion or removal of elements at the end or beginning - constant O(1)
//   Insertion or removal of elements - linear O(n)

#include<iostream>
#include<deque>

using namespace std;

// funtion to print dque
void print(const std::deque<int>& dqu){
	
	for(auto &num: dqu)  // iterator for deque. 
	    cout<<num<<" ";
	 cout<<endl;
}

int main()
{
	std::deque<int> dqu={1,2,5,5};
	dqu.push_front(50);  // inserts at front and becomes as first element.
	dqu.push_back(40);
	dqu.push_back(452);
	cout<<"The elements of first deque is: "<<endl;
	print(dqu);
	
	
	std::deque<int> dqu1={1,2,5,15};
	dqu1.pop_front();
	dqu1.pop_back();
	cout<<"The elements of second deque is: "<<endl;
	print(dqu1);
	
	return 0;
}

