#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 3, 9, 1, 6};
    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }

    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;

    return 0;
}
