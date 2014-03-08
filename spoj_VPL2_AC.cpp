#include <stdio.h>

int distances[256][256] = {
        ['G'] = {['G'] = 0, ['R'] = 1, ['Y'] = 2, ['B'] = 3, ['O'] = 4},
        ['R'] = {['G'] = 1, ['R'] = 0, ['Y'] = 1, ['B'] = 2, ['O'] = 3},
        ['Y'] = {['G'] = 2, ['R'] = 1, ['Y'] = 0, ['B'] = 1, ['O'] = 2},
        ['B'] = {['G'] = 3, ['R'] = 2, ['Y'] = 1, ['B'] = 0, ['O'] = 1},
        ['O'] = {['G'] = 4, ['R'] = 3, ['Y'] = 2, ['B'] = 1, ['O'] = 0}
};

int main()
{
    int tests, cas;
    scanf("%d", &tests);
    for (cas = 1; cas <= tests; cas++) {
        int cost, best, temp_cost = 0;
        char str[1000000];
        scanf("%d %s", &cost, str);
        int a = 0, b = 0;
        while (str[a] != '\0') {
            if (temp_cost < cost && best > b - a + 1) {
                best = b - a + 1;
            }

            if (temp_cost < cost && str[b] != '\0') {
                temp_cost += distances[str[b]][str[b+1]];
                b++;
            } else {
                temp_cost -= distances[str[a]][str[a+1]];
                a++;
            }
        }
        printf("Scenario #%d: %d\n", cas, best);
    }
    return 0;
}
