#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int t;
    int a, b, c;
    float side, area;
    float squares, temp;
    cin >> t;
    while (t--) {
    cin >> a >> b >> c;


    area = ((1.73205080757*(a*a+b*b+c*c)/4) + 3*sqrt(((a+b+c)/2)*((a+b-c)/2)*((a+c-b)/2)*((b+c-a)/2)))/2;
    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);
    cout << area;
    }
    return 0;
}
