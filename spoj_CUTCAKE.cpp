#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int t;
    long long int no;
    scanf ("%d", &t);
    while (t--) {
        scanf ("%lld", &no);
        double d = sqrt(1+8*(no-1));
        long long int ans = ceil ((d-1.0)/2.0);
        printf ("%lld\n", ans);
    }
    return 0;
}
