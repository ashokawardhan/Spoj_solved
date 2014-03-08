#include <iostream>
#include <algorithm>

#define FOR(i, b, n) for(int i = b; i <= n; i++)

using namespace std;

int main()
{
    int a[30][30];
    int n, m;
    int r, c;
    cin >> n >> m >> r >> c;
    FOR(i, 1, n) {
        FOR(j, 1, m) {
            cin >> a[i][j];
        }
    }
    FOR(i, r+1, n) {
        a[i][c] = a[i-1][c] - a[i][c];
    }
    FOR(j, c+1, n) {
        a[r][j] = a[r][j-1] - a[r][j];
    }
    FOR(i, r+1, n) {
        FOR(j, c+1, n) {
            a[i][j] = max(a[i][j-1], a[i-1][j]) - a[i][j];
        }
    }
    if (a[n][m] >= 0) {
        cout << "Y " << a[n][m] << endl;
    } else {
        cout << "N\n";
    }
    return 0;
}
