#include<stdio.h>
main()
{
    int a,b,c,d,e;
    while(scanf("%d %d %d %d %d",&a,&b,&c,&d,&e)==5){
        printf("%d\n",a*300+b*1500+c*600+d*1000+e*150+225);
    }
}
