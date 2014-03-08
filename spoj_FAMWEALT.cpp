#include <iostream>
#include <cstdio>
using namespace std;
double arr[1000000];

void func1(int x, int y, double wealth)
{
    for (int i = x; i > y;) {
        if (i%2 == 0) {
            if ((i/2)%2 == 0) {
                arr[i/2] = wealth*2;
            } else {
                arr[i/2] = wealth*2;
            }
        } else {
            if ((i/2)%2 == 0) {
                arr[i/2] = wealth*2;
            } else {
                arr[i/2] = wealth*4;
            }
        }
      // cout  << i/2 << " " << arr[i/2] << endl;
        i = i / 2;
        wealth = arr[i];
    }
}
void func2(int x, int y)
{
    for (int i = x; i < y; i++) {
        if (i%2 == 0) {
            arr[2*i] = arr[i]/2.0;
            arr[(2*i)+1] = arr[i]/2.0;
        } else {
            arr[2*i] = arr[i]/2.0;
            arr[(2*i)+1] = arr[i]/4.0;
        }
       // cout  << i << ": "<< arr[2*i] << " " << arr[(2*i)+1] << endl;
        //wealth = arr[i];
    }
}
int main()
{
    int tests;
    cin >> tests;
    while (tests--) {
        int x, y;
        double wealth;
        cin >> x >> y >> wealth;
        for (int i = 0; i < 2*(x+y) && i < 1000000; i++) {
            arr[i] = 0.0;
        }
        func1(x,1,wealth);
        func2(1,y);
        printf("%.06f\n", arr[y]);
    }
    return 0;
}
