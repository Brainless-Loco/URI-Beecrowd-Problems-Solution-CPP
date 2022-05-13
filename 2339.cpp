#include<stdio.h>
main()
{
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)==3){
        if(a*c>b)
            printf("N\n");
        else
            printf("S\n");
    }
}
