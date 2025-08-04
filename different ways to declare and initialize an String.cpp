#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    // Method 1: Default Initialization
    string str1;
    cout << "Default initialization: '" << str1 << "'" << endl;

    // Method 2: Initialize with a C-style string
    string str2 = "Hello, C++!";
    cout << "Initialized with a string literal: " << str2 << endl;

    // Method 3: Initialize with a specific character repeated
    string str3(5, 'A');
    cout << "Initialized with a repeated character: " << str3 << endl;

    // Method 4: Copy initialization
    string str4 = str2;
    cout << "Copy initialization: " << str4 << endl;

    // Method 5: Get user input with getline
    string str5;
    cout << "Enter a string: ";
    getline(cin, str5);
    cout << "User input: " << str5 << endl;

    // Method 6: Using stringstream to format a string
    int num = 100;
    stringstream ss;
    ss << "Number: " << num;
    string str6 = ss.str();
    cout << "Formatted string: " << str6 << endl;

    // Method 7: Using to_string()
    string str7 = to_string(num);
    cout << "Using to_string(): " << str7 << endl;

    // Method 8: Assign function
    string str8;
    str8.assign("Assigned String");
    cout << "Using assign(): " << str8 << endl;

    return 0;
}
/* Output:
Default initialization: ''
Initialized with a string literal: Hello, C++!
Initialized with a repeated character: AAAAA
Copy initialization: Hello, C++!
Enter a string: Hello from the user!
User input: Hello from the user!
Formatted string: Number: 100
Using to_string(): 100
Using assign(): Assigned String

*/
