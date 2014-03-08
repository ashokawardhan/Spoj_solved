#include <iostream>

using namespace std;

int main()
{
    int tests;
    cin >> tests;
    while (tests--) {
        int white, black;
        cin >> white >> black;
        if (black%2 == 1) {
            cout << "1.000000\n";
        } else {
            cout << "0.000000\n";
        }
    }
    return 0;
}
