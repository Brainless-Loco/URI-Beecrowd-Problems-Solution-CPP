#include<stdio.h>
main()
{
    int n,x,y,a,b,c;
    while(scanf("%d",&n)==1){
        while(n--){
            scanf("%d %d",&x,&y);
            a=(9*x*x)+(y*y);
            b=(2*x*x)+(25*y*y);
            c=(-100*x)+(y*y*y);
            if(a>b&&a>c)
                printf("Rafael ganhou\n");
            else if(b>a&&b>c)
                printf("Beto ganhou\n");
            else
                printf("Carlos ganhou\n");
        }
    }
}
