//  TOPIC: Optimised Vector 

// The is bestway and optimal way to acces vector.

// Generally a vector is combination of the  linkedlist(grows dynamiclly) and array(acces time o(1)).
// The problem in  vectors is that, when we push_back elemnts in vector, when the elements are filled with in array then its size double.
// The array inside the vector_template doubles,in its size and  always copies the current array elemnts and paste in new array of double size
// To overcome this we have vector_object.reserve(n) --> reserves the space for n elements.

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n;
	cout<<"Enter the approximate size for vector to reserve in memomry: "<<endl;
	cin>>n;
	vector<int> a;
	a.reserve(n); // this is to reserve "N" space in memory for vector initially, and the capacity will double at "N+1" element.
	int n1;
	cout<<"Enter the No.elements of n1: "<<endl;
	cin>>n1;
	// iterator for printing.
	for(int i=0;i<n1;i++)
	{
		a.push_back(i);
		cout<<"The size of vector: "<<a.size()<<" "<<"The capacity of vector: "<<a.capacity()<<endl;
	}
	
	return 0;
}


