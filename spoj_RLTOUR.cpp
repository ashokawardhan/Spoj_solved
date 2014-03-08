#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    int tests;
    cin >> tests;
    while (tests--) {
        int no;
        cin >> no;
        int b[no];
        long long temp;
        vector<long long> a;
        stack<long long> c;
        for (int i = 0; i < no; i++) {
            cin >> temp;
            a.push_back(temp);
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < no; i++) {
            cin >> b[i];
        }
        for (int i = no-1; i >= 0; i--) {
            if (b[i] == 0) {
                c.push(a.back());
                a.pop_back();
            } else {
                c.push(a.at(a.size()-b[i] - 1));
                a.erase(a.end()-b[i] - 1);
            }
        }
        for (int i = 0; i < no; i++) {
            cout << c.top() << " ";
            c.pop();
        }
        cout << endl;
    }
    return 0;
}
