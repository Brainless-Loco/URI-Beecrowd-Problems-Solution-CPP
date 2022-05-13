#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,i;
    while(scanf("%d",&n)==1){
        int a[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        sort(a,a+n);
        for(i=0;i<n;i++){
            if(a[i]<10)
                printf("000%d\n",a[i]);
            else if(a[i]<100)
                printf("00%d\n",a[i]);
            else if(a[i]<1000)
                printf("0%d\n",a[i]);
            else
                printf("%d\n",a[i]);
        }
    }
}
