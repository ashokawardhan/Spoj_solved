#include <iostream>
#include <set>
#include <algorithm>
#include <utility>
#include <string>

using namespace std;
typedef pair<int,int> pii;

int main()
{
    string s;
    while (1) {
        cin >> s;
        if (s == "Q") {
            break;
        }
        int r = 2000, c = 2000;
        set<pii> graph;
        graph.insert(make_pair(r,c));

        int ans = 0;
        for (int i = 0; i < s.size()-1; i++) {
            if (s[i] == 'U') {
                --r;
            } else if (s[i] == 'D') {
                ++r;
            } else if (s[i] == 'L') {
                --c;
            } else if (s[i] == 'R') {
                ++c;
            }
            if (graph.find(make_pair(r,c)) != graph.end()) {
                ans++;
            }
            graph.insert(make_pair(r,c));
        }
        cout << ans << endl;
    }
    return 0;
}
