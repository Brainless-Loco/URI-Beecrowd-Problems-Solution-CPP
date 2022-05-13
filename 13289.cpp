#include<stdio.h>
main()
{
    int i,n;
    while(scanf("%d",&n)==1){
        if(n==0)
            break;
        int a[n],m,r;
        m=0;
        r=0;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(a[i]==0)
                m++;
            else if(a[i]==1)
                r++;
        }
        printf("Mary won %d times and John won %d times\n",m,r);
    }
}
