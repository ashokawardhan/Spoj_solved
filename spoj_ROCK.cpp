#include <iostream>

using namespace std;

int main()
{
    int tests;
    int slab;
    cin >> tests;
    int add;
    while (tests--) {
        cin >> slab;
        string choc;
        int ans[201];
        cin >> choc;
        ans[0] = choc[0] - '0';
        for (int i = 1; i < slab; i++) {
            int counter = 0;
            ans[i] = ans[i-1];
            for (int j = i; j >= 0; j--) {
                counter += ((choc[j] == '1')? 1: -1);
                if (counter > 0) {
                    add = i - j + 1;
                    if (j > 0)
                        add += ans[j-1];
                    if (ans[i] < add) {
                        ans[i] = add;
                    }
                }
            }
        }
        cout << ans[slab-1] << endl;
    }
    return 0;
}
