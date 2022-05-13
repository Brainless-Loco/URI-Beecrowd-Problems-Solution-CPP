#include<stdio.h>
#include<string.h>
main()
{
    char a[51];
    int i,c;
    while(scanf("%[^\n]s",a)==1){
        for(i=0;i<strlen(a);i++){
            if(a[i]<91&&a[i]>64){
                if(a[i]+13>90){
                    c=90-a[i];
                    c=13-c;
                    a[i]=65+c-1;
                }
                else
                    a[i]+=13;
            }
            else if(a[i]>96&&a[i]<123){
                if(a[i]+13>122){
                    c=122-a[i];
                    c=13-c;
                    a[i]=97+c-1;
                }
                else
                    a[i]+=13;
            }
        }
        printf("%s\n",a);
        scanf("\n");
    }
}
