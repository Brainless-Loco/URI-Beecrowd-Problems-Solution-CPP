#include<stdio.h>
main()
{
    char a[3],b[3];
    while(scanf("%s %s",&a,&b)==2){
        if(b[0]<a[0]-2||b[0]>a[0]+2||b[0]==a[0])
            printf("INVALIDO\n");
        else{
            if(b[0]==a[0]+2||b[0]==a[0]-2){
                if(b[1]==a[1]+1||b[1]==a[1]-1)
                    printf("VALIDO\n");
                else
                    printf("INVALIDO\n");
            }
            else{
                if(b[1]==a[1]+2||b[1]==a[1]-2)
                    printf("VALIDO\n");
                else
                    printf("INVALIDO\n");
            }
        }
    }
}
