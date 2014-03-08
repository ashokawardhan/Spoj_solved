#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;

long long int dig(long long int a)
{
    if(a == 0)
        return 1;
    long long int count = 0;
    while (a != 0) {
        count++;
        a /= 10;
    }
    return count;
}
int main()
{
    long long  r = 1;
    while(1) {
        long long tmp, value[1000], a, b, i=0;
        cin >> a >> b;
        if (a == 0 && b == 0)
            break;
        printf("Case %lld:\n%lld / %lld\n",r,a,b);
        r++;
        while (b != 0) {
            value[i] = a / b;
            i++;
            tmp = a;
            a = b;
            b = tmp % b;
        }
        value[i-1]--;
        value[i++] = 1;
        long long n = i, j;
        long long numerator[n], dot[n];
        numerator[n-1] = 1;
        for (i = n - 2; i >= 0; i--)
            numerator[i] = numerator[i+1] + 3 + dig(value[i]);
        for (i = 0; i < n; i++)
            dot[i]= numerator[i] / 2;
        long long r = 2*n - 1,c = numerator[0], count, count1 = 1;
        char ans[r][c];
        for (i = 0; i < r; i++)
                for (j = 0; j < c; j++)
                        ans[i][j] = '.';
        count = 1;
        long long count2 = 0;
        long long p;
        char ch;
        for (i = 0;i < r - 1;i = i + 2)
                ans[i][c-dot[count++]-1] = '1';
        for (i = 1; i < r;i = i + 2) {
                j = c - 1;
                count = numerator[count1++];
                while (count--)
                        ans[i][j--] = '-';
                ans[i][j-1] = '+';
                j = j - 3;
                long long temp = value[count2++];
                while (temp != 0) {
                        p = temp % 10;
                        if (p == 0)
                            ch = '0';
                        if (p == 1)
                            ch = '1';
                        if (p == 2)
                            ch = '2';
                        if (p == 3)
                            ch = '3';
                        if (p == 4)
                            ch = '4';
                        if (p == 5)
                            ch = '5';
                        if (p == 6)
                            ch = '6';
                        if (p == 7)
                            ch = '7';
                        if (p == 8)
                            ch = '8';
                        if (p == 9)
                            ch = '9';
                        ans[i][j--] = ch;
                        temp /= 10;
                }
        }
        ans[r-1][c-1] = '1';
        for (i = 0; i < r; i++) {
                for (j = 0; j < c; j++)
                        cout << ans[i][j];
                cout << endl;
        }
    }
    return 0;
}
