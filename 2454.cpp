#include<stdio.h>
main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)==2){
        if(a==0)
            printf("C\n");
        else if(a==1&&b==0)
            printf("B\n");
        else
            printf("A\n");
    }
}
