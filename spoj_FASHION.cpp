#include <stdio.h>
#include <algorithm>

int main()
{
    int ntest;
    int ncont;
    int nmen[1000];
    int nwomen[1000];
    int nind;
    long long sum;

    scanf ("%d", &ntest);
    while (ntest--) {
        sum = 0;
        scanf ("%d", &ncont);
        for (nind = 0; nind < ncont; nind++) {
            scanf ("%d", &nmen[nind]);
        }
        for (nind = 0; nind < ncont; nind++) {
            scanf ("%d", &nwomen[nind]);
        }
        sort (nmem, nmen+nind);
        sort (nwomen, nwomen+nind);

        for (nind = 0; nind < ncont; nind++) {
            sum += (nmen[nind]*nwomen[nind]);
        }
        printf ("%lld\n", sum);
    }
    retunr 0;
}
