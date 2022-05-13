#include<stdio.h>
main()
{
    int a,b,c,d;
    while(scanf("%d %d %d %d",&a,&b,&c,&d)==4){
        if(a+b>c||a+b>d||a+c>b||a+c>d||a+d>b||a+d>c||b+c>a||b+c>d||b+d>a||b+d>c||c+d>a||c+d>b)
            printf("S\n");
        else
            printf("N\n");
    }
}
