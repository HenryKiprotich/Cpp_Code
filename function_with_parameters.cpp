/*Information can be passed to functions as a parameter.
Parameters act as variables inside the function.
*/
/*Note that when you are working with multiple parameters, 
the function call must have the same number of arguments
as there are parameters, and the arguments must be 
passed in the same order*/

#include <iostream>
using namespace std;

void myFunction(string fname, int age) { //fname and age are parameters 
  cout << fname << " Refsnes. " << age << " years old. \n";
}

int main() {
  myFunction("Liam", 3); //Liam and 3 are arguments 
  myFunction("Jenny", 14);
  myFunction("Anja", 30);
  return 0;
}
