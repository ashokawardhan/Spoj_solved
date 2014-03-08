#include<stdio.h>

int main()
{
    int tests;
    scanf("%d", &tests);
    while (tests--) {
        int no;
        scanf("%d", &no);
        while (no % 2 == 0) {
                no = no / 2;
        }
        if (no % 3 == 0) {
                no = no / 3;
        }
        if (no % 5 == 0) {
                no = no / 5;
        }
        if (no % 17 == 0) {
                no = no / 17;
        }
        if (no % 257 == 0) {
                no = no / 257;
        }
        if (no % 65537 == 0) {
                no = no / 65537;
        }
        if (no == 1) {
                printf("Yes\n");
        } else {
                printf("No\n");
        }
    }
    return 0;
}
