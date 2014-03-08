#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
using namespace std;
#define PI 3.14159265358979323846
double l1, l2, l3, m1, m2, m3;
int startTime[9], endTime[9];
class Point
{
public:
    double x, y;

    Point(double length, double angle)
    {
        this->x = length * sin(angle);
        this->y = length * cos(angle);
    }
};
void solve()
{
        double answer = 0.00f;
        int startTicks = (startTime[0]*10 + startTime[1]) * 3600 + (startTime[3]*10 + startTime[4]) * 60 + (startTime[6]*10 + startTime[7]);
        int endTicks = (endTime[0]*10 + endTime[1]) * 3600 + (endTime[3]*10 + endTime[4]) * 60 + (endTime[6]*10 + endTime[7]);
        double oldX = -1, oldY = -1, newX, newY;
        for (int time = startTicks; time <= endTicks; time++) {
            Point* hour = new Point(l1 / 2.0, (double) time / 43200 * 2 * PI);
            Point* minute = new Point(l2 / 2.0, (double) time / 3600 * 2 * PI);
            Point* second = new Point(l3 / 2.0, (double) time / 60 * 2 * PI);

            // weighted average by mass
            newX = 1.0 / (m1 + m2 + m3)
                            * (second->x * m3 + minute->x * m2 + hour->x * m1);
            newY = 1.0 / (m1 + m2 + m3)
                            * (second->y * m3 + minute->y * m2 + hour->y * m1);

            if (time > startTicks) {
                answer += sqrt(pow(newX - oldX, 2) + pow(newY - oldY, 2));
            }

            oldX = newX;
            oldY = newY;
        }

        printf("%.2f\n", answer);
}

void run()
{
        for (;;) {
            int firstNum;
            cin >> firstNum;
            if (firstNum == -1) break;

            l1 = firstNum;
            cin >> l2 >> l3 >> m1 >> m2 >> m3;

            string start;
            string enda;
            cin >> start >> enda;
            for (int i = 0; i < start.length(); i++) {
                    if (start[i] == ':') {
                        continue;
                    }
                startTime[i] = (start[i]) - '0';
            }
            for (int i = 0; i < enda.length(); i++) {
                    if (enda[i] == ':') {
                        continue;
                    }
                endTime[i] = (enda[i]) - '0';
            }

            solve();
            fflush(stdin);
        }
}

int main()
{
    run();
    return 0;
}
