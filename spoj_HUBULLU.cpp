#include <iostream>

int main()
{
    using namespace std;
    int tests, pieces, start;
    cin >> tests;
    while (tests--) {
        cin >> pieces >> start;
        if (start == 0) {
            cout << "Airborne wins." << endl;
        } else if (start == 1) {
            cout << "Pagfloyd wins." << endl;
        }
    }
    return 0;
}
