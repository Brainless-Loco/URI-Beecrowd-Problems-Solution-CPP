#include<stdio.h>
main()
{
    int a[9],i,s;
    while(scanf("%d",&a[0])==1){
        s=a[0];
        for(i=1;i<9;i++){
            scanf("%d",&a[i]);
            s+=a[i];
        }
        if(s%9==0)
            printf("Rudolph\n");
        else if(s%9==1)
            printf("Dasher\n");
        else if(s%9==2)
            printf("Dancer\n");
        else if(s%9==3)
            printf("Prancer\n");
        else if(s%9==4)
            printf("Vixen\n");
        else if(s%9==5)
            printf("Comet\n");
        else if(s%9==6)
            printf("Cupid\n");
        else if(s%9==7)
            printf("Donner\n");
        else if(s%9==8)
            printf("Blitzen\n");
    }
}
