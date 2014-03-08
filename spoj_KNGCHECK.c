#include <stdio.h>
#include <string.h>

/* BK = 10
    BP = 11
    BH = 12
    WK = 8
    WH = 25
    WP = 2
*/
int main()
{
    int board[8][8];
    int index, sm_index, rindex, rsm_index;
    string temp;
    int cases;
    scanf ("%d", &cases);
    while (cases--) {
    for (index = 0; index < 8; index++) {
        for (sm_index = 0; sm_index < 8; sm_index++) {
            cin << string;
            if (temp = '_') {
                board[index][sm_index] = 0;
            } else if (temp = 'BK') {
                rindex = index;
                rsm_index = sm_index;
                board[index][sm_index] = 10;
            } else if (temp = 'BP') {
                board[index][sm_index] = 11;
            } else if (temp = 'BH') {
                board[index][sm_index] = 12;
            } else if (temp = 'WK') {
                board[index][sm_index] = 8;
            } else if (temp = 'WP') {
                board[index][sm_index] = 2;
            } else if (temp = 'WH') {
                board[index][sm_index] = 25;
            }
        }
    }
    if (board[rindex+1][rsm_index+1] == 2 || board[rindex+1][rsm_index-1] == 2) {
        printf ("Check/n");
        continue;
    } else if (board[rindex][rsm_index+1] == 8 || board[rindex][rsm_index-1] == 8 || board[rindex+1][rsm_index-1] == 8 || board[rindex+1][rsm_index] == 8 || board[rindex+1][rsm_index+1] == 8 || board[rindex-1][rsm_index-1] == 8 || board[rindex+1][rsm_index] == 8 || board[rindex+1][rsm_index+1] == 8) {
        printf ("Check/n");
        continue;
    } else if (board[rindex-1][rsm_index-2] == 25 || board[rindex-2][rsm_index-1] == 25 || board[rindex-1][rsm_index+2] == 25 || board[rindex+2][rsm_index-1] == 25 || board[rindex-2][rsm_index+1] == 25 || board[rindex+1][rsm_index-2] == 25 || board[rindex+2][rsm_index+1] == 25 || board[rindex+1][rsm_index+2] == 25) {
        printf ("Check/n");
        continue;
    }
    }
    return 0;
}
