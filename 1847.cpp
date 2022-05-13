#include<stdio.h>
main()
{
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)==3){
        if(a>=b&&c>b){
            printf(":)\n");
        }
        else if(a>=b&&b>c&&(a-b>b-c)){
            printf(":)\n");
        }
        else if(a<b&&b<c&&c-b>b-a)
            printf(":)\n");
        else
            printf(":(\n");
    }
}
