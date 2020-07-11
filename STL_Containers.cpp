// Topic:  Container insed the container.

// this is one container inside other container eg: vector<vector<>>, array<array<>>,vector<array<>>.
// generally these are used in tree development.

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	std::vector<vector<int>> Tree; // This is the vector inside vector.
	int edges,n1,n2;
	
	cin>>edges;
	Tree.resize(edges);  // the tree will be resized buy edges.
	// iterator for printing.
	for(int i=0;i<edges;i++)
	{
		cin>>n1>>n2;
		Tree[n1].push_back(n2);  // ie,at the position of outside vector  we again push the element n2 into inside vector.		
	}
	// iterator for printing.
	for(const auto&e1: Tree) // traversing the outside vector, ie vector1
	{
		for(const auto&e2: e1)  // traversing the inside vector, ie vector2 whose object is refered with outer vector object.
		{
			cout<<e2<<" ";  // prints the inside vector elements at position of outside vecctor.
		}
		cout<<endl;
	}
}
