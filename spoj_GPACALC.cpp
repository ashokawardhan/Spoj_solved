#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int tests;
    cin >> tests;
    while (tests--) {
        int subjects;
        int credits, tot_credits = 0, total = 0;
        char grade;
        cin >> subjects;
        while (subjects--) {
            cin >> credits >> grade;
            tot_credits += credits;
            switch(grade) {
            case 'S':
                total += credits*10;
                break;
            case 'A':
                total += credits*9;
                break;
            case 'B':
                total += credits*8;
                break;
            case 'C':
                total += credits*7;
                break;
            case 'D':
                total += credits*6;
                break;
            case 'E':
                total += credits*5;
                break;
            }
        }
        double grades = (float)total/(float)tot_credits;
        printf("%.2f\n", grades);
    }
    return 0;
}
