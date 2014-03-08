#include <iostream>

using namespace std;

int main()
{
    int tests;
    cin >> tests;
    while (tests--) {
        int numbers;
        cin >> numbers;
        long long ans = 0;
        int temp;
        for (int i = 0; i < numbers; i++) {
            cin >> temp;
            ans += temp;
        }
        if (ans % numbers == 0) {
            cout << numbers << endl;
        } else {
            cout << numbers-1 << endl;
        }
    }
    return 0;
}
