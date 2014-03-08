#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

char x[40], y[40];
int b1, b2;
int z1[120], z2[120], len1, len2;

void add (int *z, int base, int &k)
{
    int i, j, a, b, carry;
    for(i = len1-1, j = len2-1, carry = k = 0; i >= 0 || j >= 0 || carry; i--, j--, k++) {
                a = i >= 0 ? x[i]-'0' : 0;
                b = j >= 0 ? y[j]-'0' : 0;
                z[k] = (a + b + carry) % base;
                carry = (a + b + carry) / base;
        }
        while(k--) if(z[k]) break;
}

int main()
{
    int tests, l1, l2;
    scanf ("%d", &tests);
    while (tests--) {
        scanf ("%s %s %d %d", x, y, &b1, &b2);
        len1 = strlen(x); len2 = strlen(y);
        add (z1, b1, l1);
        add (z2, b2, l2);
        if (l1 == l2 && !memcmp(z1,z2, l1*sizeof(int))) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }
}
