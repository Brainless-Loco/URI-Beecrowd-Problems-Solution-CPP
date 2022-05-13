#include<stdio.h>
main()
{
    int a,c;
    while(scanf("%d",&a)==1){
        c=a;
        while(1){
            scanf("%d",&a);
            if(a==0)
                break;
            else{
                if(a>c)
                    c=a;
            }
        }
        printf("%d\n",c);
    }
}
