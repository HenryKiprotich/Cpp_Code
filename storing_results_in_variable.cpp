
#include <iostream>
using namespace std;

int myFunction(int x, int y) {
  return x + y;
}

int main() {
  int z = myFunction(5, 3); //store the results of a function in a variable
  cout << z;
  return 0;
}