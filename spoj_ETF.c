#include <stdio.h>

int main()
{
    int t, sum;
    int num, i;

    scanf("%d", &t);

    while(t--) {
        scanf("%d", &num);
        sum = num;
        for (i = 2; i*i <= num; i++) {
            if (num % i == 0) {
                sum -= sum / i;
            }
            while (num % i == 0) {
                num /= i;
            }
        }

        if ( num > 1) {
            sum -= sum/num;
        }
        printf("%d\n", sum);
    }
     return 0;
}
