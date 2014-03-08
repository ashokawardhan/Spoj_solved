#include <iostream>

using namespace std;

int binaryReverse(int toReverse) {
      int reversed = 0;
      while(toReverse > 0) {
              reversed *= 2;
              reversed += toReverse % 2;
             toReverse /= 2;
      }
      return reversed;
}

int main()
{
    int no;
    cin >> no;
    int a[no];
    for (int i = 0; i < no; i++) {
        cin >> a[i];
        if (a[i]%2 == 0) {
           a[i] = binaryReverse(a[i]);
        }
        cout << a[i] << endl;
    }

    return 0;
}
