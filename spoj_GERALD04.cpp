#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char arrival[6], home[6];
    int arr_time, home_time, dist, diff;
    float t1, t2;
    int tests;
    cin >> tests;
    while (tests--) {
        cin >> arrival >> home >> dist;
        int arr_hh, arr_mm, home_hh, home_mm;
        arr_hh = ((arrival[0]-'0')*10 + (arrival[1]-'0'));
        arr_mm = ((arrival[3]-'0')*10 + (arrival[4]-'0'));
        home_hh = ((home[0]-'0')*10 + (home[1]-'0'));
        home_mm = ((home[3]-'0')*10 + (home[4]-'0'));
        if (arr_hh < home_hh) {
            arr_hh += 24;
        }
        int diff_hh = arr_hh - home_hh;
        int diff_mm = arr_mm - home_mm;
        int diff = diff_hh*60 + diff_mm;
        t1 = diff + dist;
        if (diff >= (2.0 * dist)) {
            t2 = diff;
        } else {
            t2 = diff+(((2.0*dist)-diff)/2.0);
        }
        cout <<setiosflags(ios::fixed)<<setprecision(1) << t1 << " " << setiosflags(ios::fixed)<<setprecision(1) << t2 << endl;
    }
    return 0;
}
