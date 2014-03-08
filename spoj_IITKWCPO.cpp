#include <iostream>
#include <algorithm>

#define INF 9999999

using namespace std;

int finde(int arr[], int len, int seek)
{
    for (int i = 0; i < len; ++i)
    {
        if (arr[i] == seek) return i;
    }
    return -1;
}

int main()
{
    int tests;
    cin >> tests;
    while (tests--) {
        int n;
        int temp;
        int ans = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr+n);
        for (int i = 0; i < n; i++) {
            if (arr[i] != INF) {
                int x = finde(arr, n, arr[i]*2);
                if (x != (-1)) {
                    arr[i] = INF;
                    arr[x] = INF;
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}
