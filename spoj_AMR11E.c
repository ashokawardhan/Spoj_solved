#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* A utility function to calculate area of triangle formed by (x1, y1),
   (x2, y2) and (x3, y3) */
float area(double x1, double y1, double x2, double y2, double x3, double y3)
{
   return abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);
}

/* A function to check whether point P(x, y) lies inside the triangle formed
   by A(x1, y1), B(x2, y2) and C(x3, y3) */
int isInside(double x1, double y1, double x2, double y2, double x3, double y3, double x, double y)
{
   /* Calculate area of triangle ABC */
   float A = area (x1, y1, x2, y2, x3, y3);

   /* Calculate area of triangle PBC */
   float A1 = area (x, y, x2, y2, x3, y3);

   /* Calculate area of triangle PAC */
   float A2 = area (x1, y1, x, y, x3, y3);

   /* Calculate area of triangle PAB */
   float A3 = area (x1, y1, x2, y2, x, y);

   /* Check if sum of A1, A2 and A3 is same as A */
   return (A == A1 + A2 + A3);
}

/* Driver program to test above function */
int main()
{
    double xs, ys, xd, yd, xa[1000], ya[1000], xb[1000], yb[1000], xc[1000], yc[1000];
    int test, i, n, j, f, no = 0, flag[1000] = {0};
    scanf ("%d", &test);
    while (test--) {
    scanf("%d%d%lf%lf%lf%lf", &n, &f, &xs, &ys, &xd, &yd);

    for (i = 0; i < n; i++) {
        scanf ("%lf%lf%lf%lf%lf%lf", &xa[i], &ya[i], &xb[i], &yb[i], &xc[i], &yc[i]);
    }
        for (j = 0; j < f + 1; j++ ) {

                for (i = 0; i < n; i++) {

                    if (flag[i] == 0 && isInside(xa[i], ya[i], xb[i], yb[i], xc[i], yc[i], xs, ys)) {
                        flag[i] = 1;
                        no++;
                    }
                }
            xs += xd;
            ys += yd;
        }
    }
    printf("%d\n", no);
   return 0;
}

