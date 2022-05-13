#include<stdio.h>
#include<math.h>
main()
{
    double u,v,w,s;
    while(scanf("%lf %lf %lf",&u,&v,&w)==3){
        if(u+v<w||v+w<u||u+w<v)
            printf("-1.000\n");
        else{
        s=(u+v+w)/2.00;
        s=s*(s-u)*(s-w)*(s-v);
        s=sqrt(s);
        s=s*4/3;
        printf("%.3lf\n",s);
        }
    }
}
