#include<stdio.h>
main()
{
    int i,t,m,j;
    while(scanf("%d",&t)==1){
        for(i=1;i<=t;i++){
            scanf("%d",&m);
            int a[m];
            for(j=0;j<m;j++)
                scanf("%d",&a[j]);
            printf("Case %d: %d\n",i,a[m/2]);
        }
    }
}
