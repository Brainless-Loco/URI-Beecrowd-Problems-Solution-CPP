#include<stdio.h>
main()
{
    int a[42],i,n;
    while(scanf("%d",&n)==1){
        if(n==0)
            break;
        a[0]=1;
        a[1]=2;
        for(i=2;i<n;i++){
            a[i]=a[i-1]+a[i-2];
        }
        printf("%d\n",a[n-1]);
    }
}
