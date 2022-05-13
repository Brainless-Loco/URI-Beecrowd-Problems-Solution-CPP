#include<stdio.h>
main()
{
    int a;
    while(scanf("%d",&a)==1){
        if(a==0)
            printf("E\n");
        else if(a>0&&a<36)
            printf("D\n");
        else if(a>35&&a<61)
            printf("C\n");
        else if(a>60&&a<86)
            printf("B\n");
        else
            printf("A\n");
    }
}
