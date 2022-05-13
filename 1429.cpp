#include<stdio.h>
#include<string.h>
main()
{
    char b[6];
    int i,s,a[5],c;
    while(scanf("%s",&b)==1){
        s=0;
        c=0;
        a[0]=1;
        a[1]=2;
        a[2]=6;
        a[3]=24;
        a[4]=120;
        if(b[0]=='0')
            break;
        for(i=strlen(b)-1;i>=0;i--){
            b[i]-=48;
            s+=b[i]*a[c];
            c++;
        }
        printf("%d\n",s);
    }
}
