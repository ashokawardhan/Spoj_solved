#include <stdio.h>

int main()
{
    int nindex, ncases, naddno;
    long long llnsum = 0;
    int ntree[1000000];

    scanf("%d", &ncases);
    while (ncases) {

        for (nindex = 0; nindex < ncases; nindex++) {
            scanf ("%d", &ntree[nindex]);
        }
        naddno = ncases / 2;
        llnsum = 0;
        for (nindex = naddno; nindex <ncases; nindex++) {
            llnsum += ntree[nindex];
        }
        printf ("%lld\n", llnsum);
        scanf ("%d", &ncases);
    }
    return 0;
}
