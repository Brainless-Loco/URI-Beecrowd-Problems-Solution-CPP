#include<stdio.h>
int main()
{
    float a, b, c, d, m, e, n;
    scanf("%f %f %f %f", &a, &b, &c, &d);
    m=(a*2 + b*3 + c*4+ d*1)/10;
    if(m>=7)
        {
        printf("Media: %.1f\n", m);
        printf("Aluno aprovado.\n");
        }
    else if(m>=5.0 && m<=6.9)
    {
        printf("Media: %.1f\n", m);
        printf("Aluno em exame.\n");
        scanf("%f", &e);
        n=(m+e)/2;
        printf("Nota do exame: %.1f\n", e);
        if(n>=5.0)
            printf("Aluno aprovado.\n");
        else if(n<=4.9)
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", n);
    }
    else
       {
        printf("Media: %.1f\n",m);
        printf("Aluno reprovado.\n");
        }
}

