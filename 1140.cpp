#include<stdio.h>
#include<string.h>
main()
{
    char a[10000],b;
    while(scanf("%c",&b)==1){
        if(b=='*')
            break;
        int i,c;
        c=0;
        scanf("%[^\n]s",a);
        for(i=0;i<strlen(a);i++){
            if(a[i]==' '){
                if(a[i+1]-b!=0&&a[i+1]-b!=32){
                    c++;
                    break;
                }
                }
            }
        if(c>0)
            printf("N\n");
        else
            printf("Y\n");
        scanf(" ");
    }
}
