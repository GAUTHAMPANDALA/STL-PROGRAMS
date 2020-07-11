// C++ program to print all permutations with 
// duplicates allowed using rotate() in STL 


                // C++ program to print all permutations with  duplicates allowed using rotate() in STL 

#include <bits/stdc++.h> 
using namespace std; 

/*   This uses Rotate function.
// Function to print permutations of string str, out is used to store permutations one by one 


void permute(string str, string out) { 

    // When size of str becomes 0, out has a  permutation (length of out is n) 
    if (str.size() == 0) 
    { 
        cout << out << endl; 
        return; 
    }   
    // One be one move all characters at  the beginning of out (or result) 
    for (int i = 0; i < str.size(); i++) 
    { 
        // Remove first character from str and  add it to out 
        permute(str.substr(1), out + str[0]); 
  
        // Rotate string in a way second character  moves to the beginning. 
        rotate(str.begin(), str.begin() + 1, str.end()); 
    } 
} */
  
  
  
  // This uses next_permute function of stl template 
  
void permute(string str) 
{ 
    // Sort the string in lexicographically 
    // ascennding order 
    sort(str.begin(), str.end()); 
  
    // Keep printing next permutation while there 
    // is next permutation 
    do { 
       cout << str << endl; 
    } while (next_permutation(str.begin(), str.end())); 
} 


// Driver code 
int main() 
{ 
    string str = "ABAC"; 
     permute(str);  // for next_permutaion function
   //  permute(str, "");  for using rotate
    return 0; 
} 
