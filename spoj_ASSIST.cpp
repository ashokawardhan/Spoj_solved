#include <iostream>

using namespace std;

int main()
{
    bool a[34500];
    int i, j, k, c;
    int primes[3000];
    for (i = 1, k = 2; i <= 3000; i++,k++) {
        while (a[k])
            k++;
        primes[i] = k;
        for (j = k+1,c = 0;j <= 34500;j++) {
            if (a[j]) continue;
            c++;
            if (c==k) {
                a[j] = 1;
                c = 0;
            }
        }
    }
    //for(int i=1; i<=3000; i++) printf("%d\t", primes[i]);

    int test;
    cin >> test;
    while (test) {
        cout << primes[test]<<endl;
        cin >> test;
    }
    return 0;
}
