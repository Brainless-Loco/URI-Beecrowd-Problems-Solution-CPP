#include<stdio.h>
main()
{
    int n,i;
    while(scanf("%d",&n)==1){
        int a[n];
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(i=1;i<n;i++){
            if(a[i]<a[i-1]){
                printf("%d\n",i+1);
                break;
            }
        }
        if(i==n)
            printf("0\n");
    }
}
