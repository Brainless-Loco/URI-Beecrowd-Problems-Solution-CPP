#include<stdio.h>
main()
{
    int i,j;
    for(i=1;i<8;i++){
        for(j=1;j<40;j++){
            if(i==1||i==7)
                printf("-");
            else if(i==2){
                if(j==1||j==39)
                    printf("|");
                else if(j==10){
                    printf("Roberto ");
                    j=j+7;
                }
                else
                    printf(" ");
            }
            else if(i==3||i==5){
                    if(j==1||j==39)
                        printf("|");
                    else
                        printf(" ");
            }
            else if(i==4){
                if(j==1||j==39)
                    printf("|");
                else if(j==10){
                    printf("5786 ");
                    j=j+4;
                }
                else
                    printf(" ");
            }
            else if(i==6){
                if(j==1||j==39)
                    printf("|");
                else if(j==10){
                    printf("UNIFEI ");
                    j=j+6;
                }
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
}
