#include <stdio.h>
#include <math.h>
int main()
{
    int tests;
    long long a, b , x, k, i, mod;
    scanf ("%d", &tests);
    while (tests--) {
        x = 0;
        scanf ("%lld%lld%lld", &a, &b, &k);
        mod = 2*k + 1;
        for (i = 0; i < 2*k; i++) {
            if ( ((long long)pow(i,a) % mod ) == b%mod) {
                x++;
            }
        }
        printf ("%lld\n", x);
    }
    return 0;
}
