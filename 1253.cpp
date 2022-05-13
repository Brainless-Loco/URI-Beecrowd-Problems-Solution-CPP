#include<stdio.h>
#include<string.h>
main()
{
    char a[51];
    int i,t,n;
    while(scanf("%d",&t)==1){
            scanf("\n");
        while(t--){
            scanf("%s",a);
            scanf("%d",&n);
            for(i=0;i<strlen(a);i++){
                a[i]-=n;
                if(a[i]<65)
                    a[i]+=26;
                printf("%c",a[i]);
            }
            printf("\n");
            scanf("\n");
        }
    }
}
