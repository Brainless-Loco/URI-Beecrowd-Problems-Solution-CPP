#include<stdio.h>
main()
{
    int a,b,n,x,y,c;
    while(scanf("%d",&n)==1){
        while(n--){
            scanf("%d %d",&a,&b);
            if(a>b){
                x=a;
                y=b;
            }
            else{
                x=b;
                y=a;
            }
            while(x%y!=0){
                c=x%y;
                x=y;
                y=c;
            }
            printf("%d\n",y);
        }
    }
}
