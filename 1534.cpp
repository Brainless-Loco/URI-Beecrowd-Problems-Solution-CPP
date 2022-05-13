#include<stdio.h>
main()
{
    int a,i,j;
    while(scanf("%d",&a)==1){
        if(a%2==0){
        for(i=1;i<=a;i++){
            for(j=1;j<=a;j++){
                if(j==i)
                    printf("1");
                else if(j==a-i+1)
                    printf("2");
                else
                    printf("3");
            }
            printf("\n");
        }
    }
    else{
        for(i=1;i<=a;i++){
            for(j=1;j<=a;j++){
                if(i==(a+1)/2&&j==(a+1)/2)
                printf("2");
                else if(j==i)
                    printf("1");
                else if(j==a-i+1)
                    printf("2");
                else
                    printf("3");
            }
            printf("\n");
        }
    }
    }
}
