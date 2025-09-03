#include <iostream>
using namespace std;

int main() {
    char c = 'B';
    switch (c) {
        
    // if the input character is A then print GFG
    case 'A':
        cout << "GFG";
        break;

    // if the input character is B then print
    // GeeksforGeeks
    case 'B':
        cout << "GeeksforGeeks";
        break;
    default:
        
        // if the input character is invalid then print
        // invalid input
        cout << "invalid input";
    }
    return 0;
}
