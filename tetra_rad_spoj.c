#include<stdio.h>
#include<math.h>

double SQ(double a)
{
  return (a)*(a);
}

double area(double a1, double a2, double a3)
{
  double s = (a1 + a2 + a3)/2.0;
  return sqrt(s*(s-a1)*(s-a2)*(s-a3));
}

main()
{
    int n;
    double U, V, W, u, v, w;
    double rad, vol , S;
    printf("Enter the no. of tries:");
    scanf("%d", &n);
  while(n--) {
    printf("\nEnter the edge lengths:");
    scanf("%lf%lf%lf%lf%lf%lf",&W, &V, &u, &U, &v, &w);
    S=0;
vol = sqrt(
           (4*SQ(u)*SQ(v)*SQ(w)
            -SQ(u)*SQ(SQ(v)+SQ(w)-SQ(U))
            - SQ(v)*SQ(SQ(w)+SQ(u)-SQ(V))
            - SQ(w)*SQ(SQ(u)+SQ(v)-SQ(W))
            + (SQ(v)+SQ(w)-SQ(U))
              *(SQ(w)+SQ(u)-SQ(V))
              *(SQ(u)+SQ(v)-SQ(W))
           ))/12.0;

    S += area(u,V,w);
    S += area(W,u,v);
    S += area(W,V,U);
    S += area(U,v,w);

    rad=(vol*3.0/S);

    printf("\n\nThe radius of the tetrahedron is: %.4lf", rad);
  }
    return 0;
}
