#include <iostream>
#include <cmath>

using namespace std;

long long gcd(long long a, long long b)
{
    while(b) b ^= a ^= b ^= a %= b;
    return a;
}

int main()
{
    long long tests;
    cin >> tests;
    while (tests--) {
        long long no, ans = 0;
        cin >> no;
        long long newx = floor(no/2);
        for (long long i = newx; i > 0; i--) {
            if (gcd(i, no) == 1) {
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
