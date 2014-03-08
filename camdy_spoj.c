#include<stdio.h>

#define MAX 10000

int no_packet[MAX];

main()
{

    int no_moves, i, tot_candy=0, n;
    while(1)
    {scanf("%d", &n);
    if(n== -1)
        return 0;
    else{
    for(i=0;i<n;i++){
        scanf("%d", &no_packet[i]);
        tot_candy+=no_packet[i];
    }
    if (tot_candy%n!=0)
        printf("-1\n");
    else{

        for(i=0;i<n;i++){
            if(no_packet[i] < tot_candy/n)
                no_moves=no_moves-no_packet[i]+tot_candy/n;
        }
        printf("%d\n", no_moves);
    }
    }
    }
    return 0;
}
