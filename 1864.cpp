#include<stdio.h>
main()
{
    int n,i;
    while(scanf("%d",&n)==1){
        char a[]="LIFE IS NOT A PROBLEM TO BE SOLVED, BUT A REALITY TO BE EXPERIENCED";
        for(i=0;i<n;i++){
            printf("%c",a[i]);
        }
        printf("\n");
    }
}
