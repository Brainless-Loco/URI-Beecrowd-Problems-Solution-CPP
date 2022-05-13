#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,n;
    while(scanf("%d",&n)==1){
        int a[n];
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        if(a[n-1]<10)
            printf("1\n");
        else if(a[n-1]<20&&a[n-1]>=10)
            printf("2\n");
        else
            printf("3\n");
    }
}
