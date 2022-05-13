#include<stdio.h>
#include<string.h>
main()
{
    char a[1001],b[1001];
    int i,j,c,n;
    while(scanf("%d",&n)==1){
        while(n--){
            scanf("%s",a);
            scanf("\n");
            scanf("%s",b);
            if(strlen(a)<strlen(b))
                printf("nao encaixa\n");
            else if(strlen(a)==strlen(b)){
                if(0==strcmp(a,b))
                    printf("encaixa\n");
                else
                    printf("nao encaixa\n");
            }
            else{
                for(i=strlen(a);;i--){
                   c=0;
                   for(j=strlen(b);j>=0;j--){
                    if(a[i]==b[j]){
                        c++;
                        i--;
                    }
                    else{
                        c=0;
                        break;
                    }
                   }
                   break;
                }
                if(c==0)
                    printf("nao encaixa\n");
                else
                    printf("encaixa\n");
            }
        }
    }
}
