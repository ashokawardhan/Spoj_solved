#include <iostream>
#include <cmath>

#define PI 3.14159265358979323
#define E 2.71828182845904523536

using namespace std;

double fastPow(double a, double b)
{
  union {
    double d;
    int x[2];
  } u = { a };
  u.x[1] = (int)(b * (u.x[1] - 1072632447) + 1072632447);
  u.x[0] = 0;
  return u.d;
}

int main()
{
    double no;
    int length;
    int tests;
    cin >> tests;
    while (tests--) {
        cin >> no;
        if (no < 3)
            length = 1;
        else
            length = floor((no*log(no)-no+(log(2.0*PI*no))/2.0)/log(10.0))+1.0 ;
        cout << length << endl;
    }
    return 0;
}
