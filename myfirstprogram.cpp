// This is a simple C++ program that prints "Hello World!" to the console.
#include <iostream>  
// "#include" is a preprocessor directive.
// It tells the compiler to include the contents of another file before compiling.
// <iostream> is the standard input/output stream library.
// It lets us use objects like 'cout' (for output) and 'cin' (for input).

using namespace std;  
// "using namespace std;" means we are telling the compiler
// to use the standard namespace (std) by default.
// Without this, we would need to write "std::cout" instead of just "cout".
// Namespaces prevent naming conflicts between different parts of code or libraries.

int main() {  
// "int" is the return type of the function. 
// main() is the entry point of every C++ program.
// The operating system calls main() when the program starts.
// Returning an int tells the OS whether the program succeeded (0 = success).

  cout << "Hello World!";  
  // "cout" (console output) is an object defined in <iostream>.
  // "<<" is the stream insertion operator.
  // It sends the string "Hello World!" into the standard output stream (usually the screen).

  return 0;  
  // "return" ends the function and gives a value back to the caller (the OS).
  // By convention, returning 0 means the program ran successfully.
}

