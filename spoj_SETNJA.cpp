#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i;
    cin >> i;
    while (i != 0) {
        int j = i - 1;
        double sum = 0.0;

        if (i > 1) {
            for (int k = 0; k < j; k++) {
                sum += double(k+1)/double(j-k);
            }
        }
        sum = sum/double(i);
        cout << "With " << i << " competitors, a Jedi Knight will be replaced approximately " << setiosflags(ios::fixed) << setprecision(2) << sum <<" times.\n";
        cin >> i;
    }
    return 0;
}
