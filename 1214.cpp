#include<stdio.h>
main()
{
     char ch='%';
     float c,n,i,t;
     int a,j;
     while(scanf("%f",&n)==1){
          for(i=1;i<=n;i++){
               scanf("%d",&a);
               float gr[a],av;
               c=0;
               av=0;
               for(j=0;j<a;j++){
                    scanf("%f",&gr[j]);
                    av+=gr[j];
               }
               av=av/float(a);
               for(j=0;j<a;j++){
                    if(gr[j]>av){
                         c++;
                    }
               }
               printf("%.3f%c\n",c*100/float(a),ch);
          }
     }
}

