#include <iostream>

using namespace std;

int main()
{
    double number;
    int year;
    long long counter = 0;
    cin >> year >> number;
    for (int i = year; i > 0; i--) {
        if ((1LL<<(i-1)) <= number) {
            number = number - (1LL<<(i-1));
        } else {
            counter++;
        }
    }
    if (counter % 2 == 0) {
        cout << "red\n";
    } else if (counter % 2 != 0){
        cout << "blue\n";
    }
    return 0;
}
