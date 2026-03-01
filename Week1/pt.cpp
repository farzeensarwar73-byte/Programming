#include <iostream>
using namespace std;

int main() {
    int n; // number of sides
    cout << "Enter sides: ";
    cin >> n;

    if (n >= 3) {
        int sum_of_angles = (n - 2) * 180;
        cout << "Sum of angles = " << sum_of_angles << endl;
    } else {
        cout << "Invalid input: n must be >= 3." << endl;
    }

    return 0;
}