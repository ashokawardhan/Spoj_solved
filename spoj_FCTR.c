#include <stdio.h>

int main()
{
    int i, sum;
    long long test, no, num;
    scanf("%lld", &test);

    for (i = 0; i < test; i++) {
        scanf("%lld", &no);
        sum = 0;
        while(no) {
            no = no/5;
            sum += no;
        }
        printf ("%d\n", sum);
    }
    return 0;
}
