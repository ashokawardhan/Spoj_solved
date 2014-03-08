#include <stdio.h>
#include <math.h>

double area(double x1, double y1, double x2, double y2, double x3, double y3)
{
   double k = ((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);
   long long j;
   j=k;
   if (j < 0) {
   	return (k * (-1));
   }
   else
   	return k;
}

long long isInside(double x1, double y1, double x2, double y2, double x3, double y3, double x, double y)
{
   double A = area (x1, y1, x2, y2, x3, y3);
   double A1 = area (x, y, x2, y2, x3, y3);
   double A2 = area (x1, y1, x, y, x3, y3);
   double A3 = area (x1, y1, x2, y2, x, y);
   return (A == (A1 + A2 + A3));
}

int main()
{
    double xs, ys, xd, yd, xa[1001], ya[1001], xb[1001], yb[1001], xc[1001], yc[1001];
    long long test, i, n, j, f, no = 0, flag[1001] = {0};
    scanf ("%lld", &test);
    while (test--) {
    scanf("%lld%lld%lf%lf%lf%lf", &n, &f, &xs, &ys, &xd, &yd);

    for (i = 0; i < n; i++) {
        scanf ("%lf%lf%lf%lf%lf%lf", &xa[i], &ya[i], &xb[i], &yb[i], &xc[i], &yc[i]);
    }
        for (j = 0; j <= f; j++ ) {
                for (i = 0; i < n; i++) {
                   if(flag[i] == 0) {
                    if (isInside(xa[i], ya[i], xb[i], yb[i], xc[i], yc[i], xs, ys)) {
                        flag[i] = 1;
                        no++;
                    }
                   }
                }
            xs += xd;
            ys += yd;
        }
    printf("%lld\n", no);
    }

   return 0;
}
