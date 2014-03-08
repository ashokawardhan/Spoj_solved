#include <iostream>

int ar[12] = {1, 2, 5, 15, 52, 203, 877, 4140, 21147, 115975, 678570, 4213597};

using namespace std;

int main()
{
    int tests;
    cin >> tests;
    while (tests--) {
        int n;
        cin >> n;
        cout << ar[n-1] << endl;
    }
    return 0;
}
