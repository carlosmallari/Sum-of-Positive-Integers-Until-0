#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0;

    cout << "Enter integers (0 to stop): ";

    cin >> number;
    while (number != 0) {
        if (number > 0) {
            sum += number;
        }
        cin >> number;
    }

    cout << "The sum of all positive integers entered is: " << sum << endl;

    return 0;
}
