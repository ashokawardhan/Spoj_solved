#include <stdio.h>

long long fib(int noOfTracks)
{
    long long sol, s1 = 2, s2 = 3, sum;
    int i;

    for (i = 0; i < noOfTracks; i++) {
        sum = s1 + s2;
        sol = s1;
        s1 = s2;
        s2 = sum;
    }
    printf("%lld\n", sol);
    return 0;
}
int main()
{
    int test, noOfTracks;
    long long solution;
    scanf("%d", &test);

    while (test--) {
        scanf ("%d", &noOfTracks);
        fib(noOfTracks);
        //printf ("%lld\n", fib(noOfTracks));
    }
    return 0;
}
