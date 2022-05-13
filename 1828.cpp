#include<stdio.h>
#include<string.h>
main()
{
    int i,n;
    while(scanf("%d",&n)==1){
        char a[10],b[10];
        for(i=1;i<=n;i++){
            scanf("%s",a);
            scanf("%s",b);
            if(0==strcmp(a,b)){
                printf("Caso #%d: De novo!\n",i);
            }
            else{
                    if(0==strcmp(a,"papel")){
                            if(0==strcmp(b,"pedra")||0==strcmp(b,"Spock"))
                                printf("Caso #%d: Bazinga!\n",i);
                            else
                                printf("Caso #%d: Raj trapaceou!\n",i);
            }
            else if(0==strcmp(a,"pedra")){
                    if(0==strcmp(b,"lagarto")||0==strcmp(b,"tesoura"))
                        printf("Caso #%d: Bazinga!\n",i);
                    else
                        printf("Caso #%d: Raj trapaceou!\n",i);
            }
            else if(0==strcmp(a,"tesoura")){
                if(0==strcmp(b,"papel")||0==strcmp(b,"lagarto"))
                    printf("Caso #%d: Bazinga!\n",i);
                else
                    printf("Caso #%d: Raj trapaceou!\n",i);
            }
            else if(0==strcmp(a,"lagarto")){
                if(0==strcmp(b,"papel")||0==strcmp(b,"Spock"))
                    printf("Caso #%d: Bazinga!\n",i);
                else
                    printf("Caso #%d: Raj trapaceou!\n",i);
            }
            else if(0==strcmp(a,"Spock")){
                if(0==strcmp(b,"tesoura")||0==strcmp(b,"pedra"))
                    printf("Caso #%d: Bazinga!\n",i);
                else
                    printf("Caso #%d: Raj trapaceou!\n",i);
            }
        }
        }
    }
}
