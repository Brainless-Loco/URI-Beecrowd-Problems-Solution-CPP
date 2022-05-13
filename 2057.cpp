#include<stdio.h>
main()
{
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)==3){
        if(a+b+c>24)
            printf("%d\n",a+b+c-24);
        else if(a+b+c<0)
            printf("%d\n",a+b+c+24);
        else if(a+b+c==24)
            printf("0\n");
        else
            printf("%d\n",a+b+c);
    }
}
