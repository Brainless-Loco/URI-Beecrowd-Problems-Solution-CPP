#include<stdio.h>
main()
{
    int i,n,d;
    while(scanf("%d",&n)==1){
        int a[n];
        float b[n],c;
        c=0;
        for(i=0;i<n;i++){
            scanf("%d %f",&a[i],&b[i]);
                if(b[i]>c){
                    c=b[i];
                    d=i;
                }
        }
        if(c>=8){
            printf("%d\n",a[d]);
        }
        else
            printf("Minimum note not reached\n");
    }
}
