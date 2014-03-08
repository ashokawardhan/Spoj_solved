#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int wars;
    cin >> wars;
    int quad[wars], nlog[wars];
    for (int i = 0; i < wars; i++) {
        cin >> quad[i];
    }
    for (int i = 0; i < wars; i++) {
        cin >> nlog[i];
    }

    sort (quad, quad + wars);
    sort (nlog, nlog + wars);
    int i = 0, j = 0, wins = 0;
    while (i < wars && j < wars) {
        if (quad[i] < nlog[j]) {
            i++;
            j++;
            wins++;
        } else
            j++;
    }
    cout << wins;
    return 0;
}
