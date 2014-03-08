#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int c, n;
    cin >> c >> n;
    int a[100001], ind[100001];
    while (c != 0 && n != 0) {
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        memset(ind,-1,sizeof(ind));
        ind[0] = 0;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum = (sum + a[i])%c;

            if (ind[sum]!=-1) {
                cout << ind[sum] +1;
                for (int j = ind[sum]+2; j <= i + 1; j++) {
                    cout << " " << j;
                }
                cout << endl;
                break;
            } else {
                ind[sum] = i+1;
            }
        }
        cin >> c >> n;
    }
    return 0;
}
