#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string input = "10 20 30 40 50";  
    stringstream ss(input);
    int num;
    int sum = 0, count = 0;

    while (ss >> num) {
        sum += num;  
        count++;
    }

    double average = (count > 0) ? (double)sum / count : 0;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}
