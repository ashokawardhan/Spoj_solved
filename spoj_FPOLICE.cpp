#include <iostream>
#include <cstdio>
#define INF 999999
using namespace std;

int dp[250][250];

int main()
{
    int tests, n, time;
    int t_taken[250][250];
    int risk[250][250];
    int i, j;

    cin >> tests;
    while (tests--) {
        cin >> n >> time;
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                cin >> t_taken[i][j];
            }
        }
        scanf ("\n");
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                cin >> risk[i][j];
            }
        }

        for (i = 1; i <= n; i++) {
            for (j = 0; j <= time; j++) {
                dp[i][j] = INF;
            }
        }
        for (j = 0; j <= time; j++) {
            dp[0][j] = 0;
        }

        for (i = 1; i < n; i++) {
            if (time- t_taken[0][i] >= 0) {
                dp[i][time-t_taken[0][i]] = risk[0][i];
            }
        }

        for (int k = time; k >= 0; k--) {
            for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                    if (i == j)
                        continue;

                    if (risk[i][j] + dp[i][k] <= dp[j][k - t_taken[i][j]]) {
                        if (k - t_taken[i][j] >= 0) {
                            dp[j][k-t_taken[i][j]]=risk[i][j]+dp[i][k];
                        }
                    }
                }
            }
        }

        int minCost = INF;
        int minTime = time;
        for (int k = time; k >= 0; k--) {
            if (dp[n-1][k] < minCost) {
                minCost = dp[n-1][k];
                minTime = k;
            }
        }
        if (minCost == INF)
            cout << "-1\n";
        else
            cout << minCost << " " << time - minTime << endl;
    }
}

