// Topic: Stack in STL

// Synatax: std::stack<datataype> object_name;

// 0. std::stack class is a container adapter that gives the programmer the functionality of a stack.
// 1. Internally it uses std::deque STL container.
// 2. It is LIFO (last-in, first-out) data structure.
// 4. std::stack allows to push(insert) and pop(remove) only from back.

// FUNCTIONS PROVIDED:
//    empty() – Returns whether the stack is empty – Time Complexity : O(1)
//    size() – Returns the size of the stack – Time Complexity : O(1)
//	  top() – Returns a reference to the top most element of the stack – Time Complexity : O(1)
//	  push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1)
//	  pop() – Deletes the top most element of the stack – Time Complexity : O(1)


#include<iostream>
#include<stack>
#include<vector>

using namespace std;

void print(std::stack<int>& st)
{
	while(!st.empty())
	{
		cout<<st.top()<<endl;
		st.pop();
	}
}

void print1(std::stack<int, std::vector<int>>& st)
{
	while(!st.empty())
	{
		cout<<st.top()<<endl;
		st.pop();
	}
}

int main()
{
	std::stack<int> st;
	std::stack<int, std::vector<int>> stv;
	
	cout<<"The normal stack: "<<endl;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(5);
	
	print(st);
	
	cout<<"The stack with vector is: "<<endl;
	stv.push(41);
	stv.push(22);
	stv.push(31);
	stv.push(24);
	stv.push(52);
	
	print1(stv);
	return 0;
	
}

