// Topic:  Userdefined comparator example with priority queue.

// Syntax:
//    defining: auto fun_name=[] (T1,T2) { return type;}; --> T1,T2 are datatypes of eleements
//    calling: std::STL_FUNTIONS<DATATYPE1, DATATYPE2, decltype(fun_name)> object_name(fun_name);

// 1. This can be placed in any STL Funtions in the comparator holder.



#include<iostream>
#include<queue>
#include<vector>

using namespace std;

// this template is same as:
//  1. void print1(std::priority_queue<int, std::vector<int>>& q)
// 2. void print(std::priority_queue<int>& q)

template<typename T>

void print_queue(T& q){ 
	while(!q.empty())
	{
		cout<<q.top()<<" ";
		q.pop();
	}
	std::cout<<'\n';
}


int main(){

	
	auto cmp=[](int left, int right){  // Defining own comparator.
		return (left) < (right);
	};
	
	std::priority_queue<int, std::vector<int>, decltype(cmp)> q2(cmp);   // using own comparator.
	for(int ele:{1,8,6,5,3,4,0,9,7,2}) { // same as q1={1,8,6,5,3,4,0,9,7,2}
		
		q2.push(ele);
	}
	cout<<"The vector with  priority_queue and using our own comparator(lambda) an arranging in decesinding order: "<<endl;
	print_queue(q2);
    
	return 0;
}
