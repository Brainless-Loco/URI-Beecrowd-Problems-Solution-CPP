#include<stdio.h>
main()
{
    int n,i,c;
    while(scanf("%d",&n)==1){
        int a[n];
        c=0;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(i>0){
                if(a[i]<a[c]){
                    c=i;
                }
            }
        }
        printf("%d\n",c+1);
    }
}
