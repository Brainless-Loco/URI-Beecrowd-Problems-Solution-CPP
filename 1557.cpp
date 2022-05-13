#include<stdio.h>
#include<math.h>
dg(int a)
{
    int d;
    d=1;
    while(a>10){
        a=a/10;
        d++;
    }
    return d;
}
main()
{
    long long n,i,j,c,a,d,k,l;
    while(scanf("%lld",&n)==1){
        if(n==0)
            break;
        else{
                a=pow(2,(2*(n-1)));
                d=1;
                while(a>10){
                    a=a/10;
                    d++;
                }
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    c=pow(2,(i+j));
                    l=1;
                    if(j==0){
                        l++;
                    }
                    while(l<=d-dg(c)+1){
                        printf(" ");
                        l++;
                    }
                    printf("%lld",c);
                    }
                printf("\n");
                }
                printf("\n");
            }
    }
}
