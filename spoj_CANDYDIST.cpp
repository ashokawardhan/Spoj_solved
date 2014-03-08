#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long llndiff, llnstudents[100000], llnprices[100000], llnindex, llnsum;
    cin >> llndiff;
    while (llndiff) {
            llnsum = 0;
        for (llnindex = 0; llnindex < llndiff; llnindex++) {
            cin >> llnstudents [llnindex];
        }
        for (llnindex = 0; llnindex < llndiff; llnindex++) {
            cin >> llnprices [llnindex];
        }
        sort (llnstudents, llnstudents+llnindex);
        sort (llnprices, llnprices+llnindex);
        for (llnindex = 0; llnindex < llndiff; llnindex++) {
            llnsum += llnstudents[llnindex] * llnprices[llnindex];
        }
        cout << llnsum << endl;
        cin >> llndiff;
    }
}
