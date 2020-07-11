// Topic: EMPLACE IN STL

// All the containers supports insert and emplace operations to store data.
// Emplace is used to construct object in-place and avoids unnecessary eopy of objects
// insert and emplace are same for premitive datatypes, but when we deal with heavy objects
//  we should use emplace for efficiency.

#include <iostream> 
#include <set> 
using namespace std; 
  
int main() 
{ 
    set<int> myset{}; 
    myset.emplace(2); 
    myset.emplace(6); 
    myset.emplace(8); 
    myset.emplace(9); 
    myset.emplace(0); 
    // set becomes 0, 2, 6, 8, 9 
  
    // adding unique element 
  
    myset.emplace(5); 
    // set becomes 0, 2, 5, 6, 8, 9 
  
    // adding element which already 
    // exists there will be no 
    // change in the set 
  
    myset.emplace(2); 
    // set remains 0, 2, 5, 6, 8, 9 
  
    // printing the set 
    for (auto it = myset.begin(); 
         it != myset.end(); ++it) 
        cout << ' ' << *it; 
    return 0; 
} 
