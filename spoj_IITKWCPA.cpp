#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int tests;
    cin >> tests;
    while (tests--) {
    vector<string> a;
    string abc;
    cin >> skipws >> abc;
    istringstream iss(abc);
    //while () {
        a.push_back(abc);
//}
    std::vector<string>::iterator it;
    sort(a.begin(), a.end());
    it = std::unique (a.begin(), a.end());
    a.resize(std::distance(a.begin(),it));
    cout << a.size() << endl;
    }
    return 0;
}
