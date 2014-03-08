#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;

int main()
{
    int players;
    char a[31];
    cin >> players;
    int charac[27];
    int flag = 0;
    for (int i = 0; i < 26; i++) {
            charac[i] = 0;
    }

    while (players--) {
        fflush(stdin);
        cin >> a;
        charac[a[0]-'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (charac[i] >= 5) {
            printf ("%c",i+'a');
            flag = 1;
        }
    }
    if (flag != 1) {
        printf("PREDAJA");
    }
    return 0;
}
