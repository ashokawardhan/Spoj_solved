#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    while(b)
        b ^= a ^= b ^= a %= b;
    return a;
}

int main()
{
    int l, b;
    cin >> l >> b;
    while (l && b) {
        int g = gcd(l,b);
        l /= g;
        b /= g;
        cout << ((l+b-2)<<2) << endl;
        cin >> l >> b;
    }
}
