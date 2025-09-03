/*Note: the use of goto statement is discouraged in C++ programming
because it may disturb the readability of the code and make the code error-prone.
*/
#include <iostream>
using namespace std;

int main() {
    int age = 17;
    if (age < 18) {
        
        // Execution of code go to the
        // line 15
        goto Noteligible;
    }
    else {
        cout << "You can vote!";
    }
Noteligible:
    cout << "You are not eligible to vote!\n";
    return 0;
}
