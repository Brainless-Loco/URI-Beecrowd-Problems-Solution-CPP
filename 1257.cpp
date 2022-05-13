#include<stdio.h>
#include<string.h>
main()
{
    long long n,t,i,s,j;
    char a[100];
    while(scanf("%lld",&n)==1){
        while(n--){
            scanf("%lld",&t);
            scanf("\n");
            s=0;
            for(i=0;i<t;i++){
                for(j=0;;j++){
                    scanf("%c",&a[j]);
                    if(a[j]=='\n')
                        break;
                    else{
                    a[j]-=65;
                    s+=i+j+a[j];
                    }
                }
            }
            printf("%lld\n",s);
            scanf("\n");
        }
    }
}
