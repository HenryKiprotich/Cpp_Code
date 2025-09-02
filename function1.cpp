/*C++ provides some pre-defined functions, such as main(), 
which is the entry point of every C++ program.*/ 
#include <iostream>
using namespace std;

// Declare/Create a function
// void means that the function does not have a return value. 
void myFunction() { // return type [void], function name (declaration)
  cout << "I just got executed!"; // the body of the function (definition)
}

// Inside main, call myFunction():
int main() {
  myFunction(); // call the function
  return 0;
}

