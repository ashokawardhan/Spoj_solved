#include <iostream>

using namespace std;

long long binaryReverse(long long toReverse) {
      long long reversed = 0;
      while(toReverse > 0) {
              reversed *= 2;
              reversed += toReverse % 2;
             toReverse /= 2;
      }
      return reversed;
}

int main()
{
    long long x;
    cin >> x;
    while (x != (-1)) {
        cout << binaryReverse(x) << endl;
        cin >> x;
    }
    return 0;
}
