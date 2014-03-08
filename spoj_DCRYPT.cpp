#include <iostream>

using namespace std;

int main()
{
    int tests, key, i, tmp;
    char a[100005];
    cin >> tests;
    while (tests--) {
        cin >> key >> a;
        if (key < 26) {
            for (i = 0; a[i] != '\0'; i++) {
                tmp = a[i];
                if (tmp >= 65 && tmp <= 90) {
                    tmp -= 65;
                    tmp = (tmp + key) % 26;
                    tmp += 65;
                } else if (tmp >= 97 && tmp <= 122) {
                    tmp -= 97;
                    tmp = (tmp + key) % 26;
                    tmp += 97;
                } else {
                    tmp = 32;
                }
                a[i] = tmp;
            }
        } else {
            key -= 26;
            for (i = 0; a[i] != '\0'; i++) {
                tmp = a[i];
                if (tmp >= 65 && tmp <= 90) {
                    tmp -= 65;
                    tmp = (tmp + key) % 26;
                    tmp += 97;
                } else if (tmp >= 97 && tmp <= 122) {
                    tmp -= 97;
                    tmp = (tmp + key) % 26;
                    tmp += 65;
                } else {
                    tmp = 32;
                }
                a[i] = tmp;
            }
        }
        cout << a << endl;
    }
    return 0;
}
