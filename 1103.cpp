#include<stdio.h>
main()
{
    int a,b,c,d,m,h;
    while(scanf("%d %d %d %d",&a,&b,&c,&d)==4){
        if(a==b&&b==c&&c==d&&d==0)
            break;
        else{
            m=d-b;
            if(m<0){
                m+=60;
                c--;
            }
           h=c-a;
           if(h<0)
                h+=24;
           m+=(h*60);
           printf("%d\n",m);
        }
    }
}
