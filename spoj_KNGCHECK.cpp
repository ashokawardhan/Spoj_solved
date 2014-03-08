#include <stdio.h>
#include <iostream>
#include <string>

/* BK = 10
    BP = 11
    BH = 12
    WK = 8
    WH = 25
    WP = 2
*/
using namespace std;

int main()
{
    int board[8][8];
    int index, sm_index, rindex, rsm_index;
    string temp;
    int cases;
    scanf ("%d", &cases);
    int orig = cases;
    while (cases--) {
    for (index = 0; index < 8; index++) {
        for (sm_index = 0; sm_index < 8; sm_index++) {
            cin >> temp;
            if ( temp.compare(0,2,"-") == 0) {
                board[index][sm_index] = 0;
            } else if (temp.compare(0,2,"BK") == 0) {
                rindex = index;
                rsm_index = sm_index;
                board[index][sm_index] = 10;
            } else if (temp.compare(0,2,"BP") == 0) {
                board[index][sm_index] = 11;
            } else if (temp.compare(0,2,"BH")==0) {
                board[index][sm_index] = 12;
            } else if (temp.compare(0,2,"WK")==0) {
                board[index][sm_index] = 8;
            } else if (temp.compare(0,2,"WP")==0) {
                board[index][sm_index] = 2;
            } else if (temp.compare(0,2,"WH") == 0) {
                board[index][sm_index] = 25;
            }
        }
    }
//    for (index = 0; index < 8; index++) {
//        for (sm_index = 0; sm_index < 8; sm_index++) {
//                printf("%d ", board[index][sm_index]);
//        }
//        cout << endl;
//    }
    printf ("Case #%d: ", orig - cases);
    if (board[rindex+1][rsm_index+1] == 2 || board[rindex+1][rsm_index-1] == 2) {
        printf ("Check\n");
        continue;
    } else if (board[rindex][rsm_index+1] == 8 || board[rindex][rsm_index-1] == 8 || board[rindex+1][rsm_index-1] == 8 || board[rindex+1][rsm_index] == 8 || board[rindex+1][rsm_index+1] == 8 || board[rindex-1][rsm_index-1] == 8 || board[rindex+1][rsm_index] == 8 || board[rindex+1][rsm_index+1] == 8) {
        printf ("Check\n");
        continue;
    } else if (board[rindex-1][rsm_index-2] == 25 || board[rindex-2][rsm_index-1] == 25 || board[rindex-1][rsm_index+2] == 25 || board[rindex+2][rsm_index-1] == 25 || board[rindex-2][rsm_index+1] == 25 || board[rindex+1][rsm_index-2] == 25 || board[rindex+2][rsm_index+1] == 25 || board[rindex+1][rsm_index+2] == 25) {
        printf ("Check\n");
        continue;
    } else {
        printf ("Not Check\n");
    }
    }
    return 0;
}
