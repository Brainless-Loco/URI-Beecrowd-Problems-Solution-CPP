#include<stdio.h>
main()
{
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)==3){
    if(a==b||b==c||a==c)
        printf("S\n");
    else if((a+b)==c||(b+c)==a||(a+c)==b)
        printf("S\n");
    else
        printf("N\n");
    }
}
