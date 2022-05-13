#include<stdio.h>
main()
{
    int a,b,c,d,e;
    while(scanf("%d %d %d %d %d",&a,&b,&c,&d,&e)==5){
        if(d==e&&e==1)
            printf("Jogador 2 ganha!\n");
        else{
            if((a==1&&(b+c)%2==0)||(a==0&&(b+c)%2!=0)||d==1)
                printf("Jogador 1 ganha!\n");
            else
                printf("Jogador 2 ganha!\n");
        }
    }
}
