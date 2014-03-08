#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        long long x;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> x;
            if(x < 0) {
                cout << x << " ";
            } else if (x > 5) {
                cout << "-4 ";
            } else if (x == 5 || x == 1) {
                cout << "-3 ";
            } else if (x == 4 || x == 3 || x == 0) {
                cout << "-4 ";
            } else if (x == 2) {
                cout << "-2 ";
            }
        }
        cout << endl;
    }
    return 0;
}
