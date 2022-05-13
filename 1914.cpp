#include<stdio.h>
#include<string.h>
main()
{
    int n,y,z;
    char a[101],b[101],d[6],c[6];
    while(scanf("%d",&n)==1){
        scanf("\n");
        while(n--){
            scanf("%s %s %s %s",a,c,b,d);
            scanf("%d %d",&y,&z);
            if((y+z)%2==0){
                if(0==strcmp(c,"PAR"))
                    printf("%s\n",a);
                else
                    printf("%s\n",b);
            }
            else{
                if(0==strcmp(c,"IMPAR"))
                    printf("%s\n",a);
                else
                    printf("%s\n",b);
            }
        }
    }
}
