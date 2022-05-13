#include<stdio.h>
main()
{
    int i,j,n,c,d;
    while(scanf("%d",&n)==1){
        c=1;
        for(i=0;i<n;i++){
            d=0;
            for(j=0;j<n;j++){
                if(j>0)
                    printf(" ");
                if(i==0||i==n-1||j==0||j==n-1){
                    printf("  1");
                    }

                printf("  %d",c);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
}
