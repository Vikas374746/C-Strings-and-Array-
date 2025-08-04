#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Level";  // Example word
    int n = str.length();
    bool isPalindrome = true;  // Assume it is a palindrome

    // Loop to check characters from both ends of the string
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            isPalindrome = false;  // Mismatch found, it's not a palindrome
            break;  // Exit loop early since we already know it's not a palindrome
        }
    }

    if (isPalindrome) {
        cout << "\"" << str << "\" is a palindrome!" << endl;
    } else {
        cout << "\"" << str << "\" is not a palindrome." << endl;
    }

    return 0;
}

/*
Output:
"Level" is a palindrome!
*/
