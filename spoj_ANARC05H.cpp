#include <iostream>
#include <cstring>
using namespace std;

int len, dp[26][256];
char number[26];

int ans (int pos, int prev)
{
    if (pos == len)
        return 1;
    if (dp[pos][prev] != -1) {
        return dp[pos][prev];
    }
    dp[pos][prev] = 0;
    for (int i = pos, sum = 0; i < len; i++) {
        sum += number[i] - '0';
        if (sum >= prev) {
            dp[pos][prev] += ans (i + 1, sum);
        }
    }
    return dp[pos][prev];
}

int main()
{
    int caseno = 1;
    cin >> number;
    while (isdigit(number[0])) {
        len = strlen(number);
        memset (dp, -1, sizeof(dp));
        cout << caseno << ". " << ans(0,0) << endl;
        caseno++;
        cin >> number;
    }
}
