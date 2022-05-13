#include<stdio.h>
#include<string.h>
main()
{
    long long a,b,c,i;
    char x[100];
    while(scanf("%lld",&a)==1){
        c=0;
        while(a!=0){
            b=a%16;
            if(b<10){
                x[c]=b+48;
                c++;
            }
            else{
                x[c]=b+55;
                c++;
            }
            a/=16;
        }
        for(i=c-1;i>=0;i--)
            printf("%c",x[i]);
        printf("\n");
    }
}
