#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        // if i become 3 then break the loop and move to
        // next statement out of loop
        if (i == 3) {
            break;
        }
        cout << i << endl;
    }
    // next statements
    return 0;
}
