#include<stdio.h>
main()
{
    int a,b,d,e;
    while(scanf("%d %d",&a,&b)==2){
        int c[b],i;
        d=0;
        for(i=0;i<b;i++){
            scanf("%d",&c[i]);
            if(i>0){
                e=c[i]-c[i-1];
                if(e<0)
                    e*=-1;
                if(e>a){
                    d++;
                }
            }
        }
        if(d==0)
            printf("YOU WIN\n");
        else
            printf("GAME OVER\n");
    }
}
