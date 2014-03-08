#include <stdio.h>

int main()
{
    int a, b, c;
    int dif1, dif2, mul;

    while(1) {
        scanf ("%d%d%d", &a, &b, &c);
        if (a == 0 && b == 0 && c == 0)
            break;
        dif1 = b - a;
        dif2 = c - b;
        if (dif2 == dif1) {
            printf ("AP %d\n", (c + dif2));
        } else {
            mul = (b / a);
            printf ("GP %d\n", (c * mul));
        }
    }
    return 0;
}
