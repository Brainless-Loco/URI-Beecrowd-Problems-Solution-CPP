#include<stdio.h>
main()
{
    int a,b,c;
    while(scanf("%d",&a)==1){
        scanf("%d %d",&b,&c);
        if(a<(b+c))
            printf("Deixa para amanha!\n");
        else
            printf("Farei hoje!\n");
    }
}
