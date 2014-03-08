#include <stdio.h>
int main(i)
{
    int j,s,d[1001];
    for(i = 1e3; i;)
        d[i--] = 1;
    for(printf("e>2."); ++i<429; printf("%06d",s))
        for(s = 0,j = 1e3; j > 1 ;d[j] = s % j, s /= j--)
            s += 1e6*d[j];puts("");
}

