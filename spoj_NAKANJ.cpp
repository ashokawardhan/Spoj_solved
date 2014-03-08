#include <iostream>
#include <set>
#include <cstdio>

#define INF 99999
using namespace std;

struct node {
    int i, j;
    int cost;
    node (int r, int c, int ans) : i(r), j(c), cost(ans){}
};
//bool operator <( node a, node b ) {
//  if ( a.cost == b.cost ) {
//    if ( a.i == b.i ) {
//      return a.j < b.j;
//    }
//    return a.i < b.i;
//  }
//  return a.cost < b.cost;
//}
int maxmovement = 8;
int movements[8][2] = {{1,2}, {2,1}, {2,-1}, {1,-2}, {-1,-2}, {-2,-1}, {-2,1}, {-1,2}};
int costar[8][8];
int bfs (node n1, node n2)
{
    for (int i = 0; i < 8; ++i ) {
    for (int j = 0; j < 8; ++j ) {
      costar[ i ][ j ] = INF;
    }
  }
    set <node> q;
    q.insert(n1);
    while (!q.empty()) {
        node newnode = *q.begin();
        q.erase(*q.begin());

        if (newnode.i < 0 || newnode.i > 7 || newnode.j < 0 || newnode.j > 7) {
            continue;
        }
        if (costar[newnode.i][newnode.j] > newnode.cost) {
            costar[newnode.i][newnode.j] = newnode.cost;

        if (newnode.i == n2.i && newnode.j == n2.j) {
            return newnode.cost;
        }

        for (int i = 0; i < maxmovement; i++) {
            node temp(newnode.i+movements[i][0], newnode.j+movements[i][1], 0);
//            temp.i = newnode.i+movements[i][0];
//            temp.j = newnode.j+movements[i][1];
            q.insert (node(temp.i,temp.j, newnode.cost + newnode.i*temp.i + newnode.j*temp.j));
        }
        }
    }
}

int main()
{
    int starti, startj, targeti, targetj;
    while (scanf("%d%d%d%d", &starti, &startj, &targeti, &targetj ) != EOF) {
        //int starti, startj, targeti, targetj;
        int ans = bfs(node(starti,startj,0), node(targeti,targetj,0));
        cout << ans << endl;
    }
    return 0;
}
