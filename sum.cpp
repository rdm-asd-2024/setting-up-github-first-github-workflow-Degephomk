#include <iostream>
using namespace std;
int main() {
    int num, sum = 0;

    cout << "Enter a sequence of positive integers (enter 0 to terminate):\n";

    do {
        cin >> num;
        sum += num;
    } while (num != 0);

    cout << "Sum of the integers: " << sum << endl;

    return 0;
}
