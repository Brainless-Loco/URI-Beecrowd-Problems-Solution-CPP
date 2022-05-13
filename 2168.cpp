#include<stdio.h>
main()
{
    int n,i,j;
    while(scanf("%d",&n)==1){
        int a[n+1][n+1];
        for(i=0;i<n+1;i++){
            for(j=0;j<n+1;j++)
                scanf("%d",&a[i][j]);
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(a[i][j]+a[i][j+1]+a[i+1][j+1]+a[i+1][j]>=2)
                    printf("S");
                else
                    printf("U");
            }
            printf("\n");
        }
    }
}
