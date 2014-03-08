#include <stdio.h>
#include <math.h>

int main()
{
    int ntests;
    double r1, r2, r3, inr;
    scanf ("%d", %ntests);
    while (ntests--) {
        inr = 0;
        scanf ("%lf%lf%lf", &r1, &r2, &r3);
        inr = (1/r1) + (1/r2) + (1/r3) + 2 * sqrt ( (1/(r1*r2)) + (1/(r2*r3)) + (1/ (r1*r3)));
        inr = 1/inr;
        printf ("%lf", inr);
    }
    return 0;
}
