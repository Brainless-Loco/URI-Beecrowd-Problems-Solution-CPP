#include<stdio.h>
#include<string.h>
main()
{
    char a[501];
    gets(a);
    if(strlen(a)>80)
        printf("NO\n");
    else
        printf("YES\n");
}
