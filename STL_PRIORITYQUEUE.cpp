// Topic: PRIORITY QUEUE IN STL.

// Syntax: std::priority_queue <datatype> q;

// Syntax for Defining own comparator:
//    defining: auto fun_name=[] (T1,T2) { return type;}; --> T1,T2 are datatypes of eleements
//    calling: std::STL_FUNTIONS<DATATYPE1, DATATYPE2, decltype(fun_name)> object_name(fun_name);

// 0. std::priority_queue is a container adaptor that provides constant time lookup of the largest OR smallest element.
// 1. By default std::vector is the container used inside.
// 2. Cost of insertion and extraction is logarithmic.
// 3. std::priority_queue is internearlly  implemented using std::
//    step1: make_heap
//    step2: Insertions is based on  std::push_heap
//    step3:  Deetion is based on  std::pop_heap functions.


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
	
	std::priority_queue <int> q;
	for(int ele:{1,8,6,5,3,4,0,9,7,2}) { // same as q={1,8,6,5,3,4,0,9,7,2}
		
		q.push(ele);
	}
	cout<<"The general priority_queue is as: "<<endl;
	print_queue(q);
	
	
	std::priority_queue<int, std::vector<int>, std::greater<int>> q1; 
	for(int ele:{1,8,6,5,3,4,0,9,7,2}) { // same as q1={1,8,6,5,3,4,0,9,7,2}
		
		q1.push(ele);
	}
	cout<<"The vector with  priority_queue is as: "<<endl;
	print_queue(q1);
	
	
	// USING LAMBDA OPERATORS, ie using our own comparators  TO COMPARE.
	
	auto cmp=[](int left, int right){
		return (left) < (right);
	};
	std::priority_queue<int, std::vector<int>, decltype(cmp)> q2(cmp);   // using own comparator.
	for(int ele:{1,8,6,5,3,4,0,9,7,2}) { // same as q1={1,8,6,5,3,4,0,9,7,2}
		
		q2.push(ele);
	}
	cout<<"The vector with  priority_queue and using our own comparator(lambda) an arranging in decesinding order: "<<endl;
	print_queue(q2);
    
	
	
	
	auto cmp1=[](int left, int right){
		return (left) > (right);
	};
	std::priority_queue<int, std::vector<int>, decltype(cmp1)> q3(cmp1);
	for(int ele:{1,8,6,5,3,4,0,9,7,2}) { // same as q1={1,8,6,5,3,4,0,9,7,2}
		
		q3.push(ele);
	}
	cout<<"The vector with  priority_queue and using our own comparator(lambda) an arranging in asceding order: "<<endl;
	print_queue(q3);
	
	return 0;
}
