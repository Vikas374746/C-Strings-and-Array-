#include <iostream>
#include <string>
using namespace std;

int main() {
    // Method 1: Concatenating two cool strings
    string str1 = "Rocket";
    string str2 = "Science!";
    string result1 = str1 + " is " + str2;  // Concatenating with a "is" in between
    cout << "Concatenation of two cool strings: " << result1 << endl;

    // Method 2: Concatenating a string with a fun literal
    string str3 = "Unleash the power of ";
    string result2 = str3 + "innovation!";
    cout << "Concatenating string with a fun literal: " << result2 << endl;

    return 0;
}

/*
Output:
Concatenation of two cool strings: Rocket is Science!
Concatenating string with a fun literal: Unleash the power of innovation!

*/
