#include<stdio.h>
#include<string.h>
main()
{
    int i,n;
    char a[51];
    while(scanf("%d",&n)==1){
        scanf("\n");
        while(n--){
            scanf("%[^\n]s",a);
            if(a[0]>96&&a[0]<123)
                printf("%c",a[0]);
            for(i=1;i<strlen(a);i++){
                if(a[i-1]==' '&&a[i]!=' '){
                    printf("%c",a[i]);
                }
            }
            printf("\n");
            scanf("\n");
        }
    }
}
