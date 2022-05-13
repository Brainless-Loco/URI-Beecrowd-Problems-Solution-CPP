#include<stdio.h>
main()
{
    long long i,n,c;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        c=0;
        char a,ch;
        if(i==1){
            scanf(" ");
        }
        for(;;){
                scanf("%c",&a);
                if(a=='\n'){
                    printf("%lld leds\n",c);
                    break;
                }
            if(a=='1'){
                c+=2;
            }
            else if(a=='2'||a=='3'||a=='5'){
                c+=5;
            }
            else if(a=='7'){
                c+=3;
            }
            else if(a=='4'){
                c+=4;
            }
            else if(a=='8'){
                c+=7;
            }
            else
                c+=6;
        }
    }
}
