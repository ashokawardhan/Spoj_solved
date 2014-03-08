#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
    int tests, damage, players[500], towers, no_players,live;
    scanf("%d", &tests);
    while (tests--) {
        scanf ("%d%d%d", &no_players, &towers, &damage);
        for (int i = 0; i < no_players; i++) {
            scanf("%d", &players[i]);
        }
        while(towers--) {
            live = 0;
            sort(players, players+no_players);
            players[no_players] -= damage;
            if (players[no_players] > 0) {
                live = 1;
            }
        }
        if (live == 1) {
            printf ("YES\n");
        } else if (live == 0) {
            printf ("NO\n");
        }
    }
    return 0;
}
