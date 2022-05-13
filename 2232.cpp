#include<stdio.h>
#include<math.h>
main()
{
    int i,n,s,a;
    while(scanf("%d",&n)==1){
        while(n--){
            scanf("%d",&a);
            s=0;
            for(i=0;i<a;i++){
                s+=pow(2,i);
            }
            printf("%d\n",s);
        }
    }
}
