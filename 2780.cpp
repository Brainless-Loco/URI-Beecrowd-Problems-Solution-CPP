#include<stdio.h>
main()
{
    int a;
    while(scanf("%d",&a)==1){
        if(a<=800)
            printf("1\n");
        else if(a>800&&a<=1400)
            printf("2\n");
        else
            printf("3\n");
    }
}
