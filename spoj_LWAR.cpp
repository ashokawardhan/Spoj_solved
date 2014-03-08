#include <iostream>
#include <string>
using namespace std;

int main()
{
    int tests;
    cin >> tests;
    while (tests--) {
        string bin;
        cin >> bin;
        int len = bin.size();
        int ch, done = 0, next = 0;
        bool inv = false;
        for (int i = 0; i < len; i++) {
            ch = bin[i];
            if (inv)
                ch = '1' - ch + '0';
            if (next) {
                if (ch == '0') {
                    ch = '1';
                } else {
                    ch = '0';
                    inv = !inv;
                    done = 1;
                }
                next = 0;
            } else if (!done) {
                if (ch == '0') {
                    done = 1;
                } else {
                    next = 1;
                }
            }
            cout << ch-48;
        }
        cout << endl;
    }
    return 0;
}
