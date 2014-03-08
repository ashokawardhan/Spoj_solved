#include<stdio.h>

main()
{
    char s1[20], s2[20];
    int a1[26], a2[26], i, n;
    scanf("%d", &n);
    while(n--){
        scanf("%s", s1);
        for(i=0;s1[i]!='\n';i++){
            a1[s1[i]-'a']++;
        }
        scanf("%s", s2);
        for(i=0;s2[i]!='\n';i++){
            a2[s2[i]-'a']++;
        }
        if(a1==a2)
            printf("YES");
        else
            printf("NO");
    }
}
