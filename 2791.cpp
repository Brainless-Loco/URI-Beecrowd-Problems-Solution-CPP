#include<stdio.h>
main()
{
    int a,b,c,d;
    while(scanf("%d %d %d %d",&a,&b,&c,&d)==4){
         if(a==1)
            printf("1\n");
         else if(b==1)
            printf("2\n");
         else if(c==1)
            printf("3\n");
         else
            printf("4\n");
    }
}
