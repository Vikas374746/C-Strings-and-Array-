#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int num;

    cout << "Enter number to find: ";
    cin >> num;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == num) {
            cout << "Number found at index " << i << endl;
            return 0;
        }
    }

    cout << "Number not found." << endl;
    return 0;
}
