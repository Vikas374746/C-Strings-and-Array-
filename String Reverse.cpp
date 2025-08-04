#include <iostream>
#include <string>
#include <algorithm>  // For std::reverse
using namespace std;

int main() {
    // New cool string
    string str = "Coding is magic!";

    // Reversing the string using std::reverse
    reverse(str.begin(), str.end());

    cout << "Reversed string: " << str << endl;

    return 0;
}



/*
Output:
Reversed string: !gicam si gnidoC

*/
