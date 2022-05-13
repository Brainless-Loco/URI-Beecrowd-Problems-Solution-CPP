#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,i;
    while(scanf("%d",&n)==1){
        int a[n],b[n];
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            b[i]=a[i];
        }
        sort(b,b+n);
        if(b[n-1]==b[n-2]){
            if(a[0]==b[n-1])
                printf("S\n");
            else
                printf("N\n");
        }
        else{
            if(a[0]==b[n-1])
                printf("S\n");
        else
            printf("N\n");
        }
    }
}
