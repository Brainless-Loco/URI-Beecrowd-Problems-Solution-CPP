#include<stdio.h>
#include<string.h>
main()
{
    char a[501];
    gets(a);
    if(strlen(a)>140)
        printf("MUTE\n");
    else
        printf("TWEET\n");
}
