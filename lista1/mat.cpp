#include <stdio.h>
#include<math.h>

int main()
{
    int Numero1,Numero2,Soma,Subtracao,Multiplicacao,Radiciacao1,Radiciacao2;
    float Divisao,Logaritimo1,Potenciacao1,Logaritimo2,Potenciacao2;
 printf("Escreva um numero inteiro: ");
 scanf("%d",&Numero1);
 printf("Escreva outro numero inteiro: ");
 scanf("%d",&Numero2);
 Soma = Numero1 + Numero2;
 printf("Soma = %d\n",Soma);
 Subtracao = Numero1 - Numero2;
 printf("Subtracao = %d\n",Subtracao);
 Multiplicacao = Numero1 * Numero2;
 printf("Multiplicacao = %d\n",Multiplicacao);
 Divisao = Numero1 / Numero2;
 printf("Divisao = %.2f\n",Divisao);
 Logaritimo1 = log(Numero1);
 Logaritimo2 = log(Numero2);
 printf("Logaritimo1 = %.1f\n",Logaritimo1);
 printf("Logaritimo2 = %.1f\n",Logaritimo2);
 Potenciacao1 = pow(Numero1,2);
 Potenciacao2 = pow(Numero2,2);
 printf("Potenciacao1 = %.1f\n",Potenciacao1);
 printf("Potenciacao2 = %.1f\n",Potenciacao2);
 Radiciacao1 = sqrt(Numero1);
 Radiciacao2 = sqrt(Numero2);
 printf("Radiciacao1 = %d\n",Radiciacao1);
 printf("Radiciacao2 = %d\n",Radiciacao2);
 
 return 0;
}
