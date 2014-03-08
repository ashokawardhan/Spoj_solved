// Program to print all prime factors
# include <stdio.h>
# include <math.h>


/* Driver program to test above function */
int main()
{

    long long n;
    scanf ("%lld", &n);
    while (n != -1) {
        int no_two = 0, others = 0;
    long long out = 1, in = 1;
    // Print the number of 2s that divide n
    while (n%2 == 0)
    {
        no_two++;
        n = n/2;
        in *= 2;
        if (no_two % 2 == 0) {
            out *= 2;
            in /= 4;
        }
    }
    int i;
    // n must be odd at this point.  So we can skip one element (Note i = i +2)
    for (i = 3; i <= sqrt(n); i = i+2)
    {
        others = 0;
        // While i divides n, print i and divide n
        while (n%i == 0)
        {

            n = n/i;
            others++;
            in *= i;
            if (others % 2 == 0) {
                out *= i;
                in /= (i*i);
            }
        }
    }

    // This condition is to handle the case whien n is a prime number
    // greater than 2
    if (n > 2) {
        others++;
            in *= i;
        if (others % 2 == 0) {
            out *= i;
            in /= (i*i);
        }
    }
        if (out != 1)
        printf ("%lld %lld\n", out, in);
        else
            printf ("1 %lld\n", n);
        scanf ("%lld", &n);
    }
    return 0;
}
