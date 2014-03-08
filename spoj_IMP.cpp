#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

struct Move {
    int x,y;
    Move operator -(Move p) {
       Move t;
       t.x = x - p.x;
       t.y = y - p.y;
       return t;
    }
    Move operator +(Move p) {
       Move t;
       t.x = x + p.x;
       t.y = y + p.y;
       return t;
    }

};

int MHdis(Move a)
{
    return abs(a.x) + abs(a.y);
}

Move compute(Move a, Move b)
{
    while (MHdis(a - b) < MHdis(a) && MHdis(a - b)) {
        a = a - b;
    }
    while (MHdis(a + b) < MHdis(a) && MHdis(a + b)) {
            a = a + b;
    }
    return a;
}
int main()
{
   int tests = 10;
   while(tests--) {
        Move A, B;
        cin >> A.x >> A.y >> B.x >> B.y;
        Move mx, mn, t;
        if (MHdis(A) > MHdis(B)) {
            mx = A;
            mn = B;
        }
        else {
                mx = B;
                mn = A;
        }
        while (MHdis(t = compute(mx, mn)) < MHdis(mn)) {
               mx = mn;
               mn = t;
        }
       cout << MHdis(mn) << endl;
   }
   return 0;
}
