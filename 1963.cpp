#include<stdio.h>
main()
{
    double a,b;
    char c;
    c='%';
    while(scanf("%lf %lf",&a,&b)==2){
        printf("%.2lf%c\n",((b-a)*100/a),c);
    }
}
