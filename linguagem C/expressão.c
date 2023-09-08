#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float a, b, c, r, s, d;

    printf("Insira o valor de A: ");
    scanf("%f", &a);

    printf("Insira o valor de B: ");
    scanf("%f", &b);

    printf("Insira o valor de C: ");
    scanf("%f", &c);

    r = (a+b)*(a+b);
    s = (b+c)*(b+c);
    d = (r+s)/2;

    printf("O valor de D é: %.2f\n", d);

    return 0;
}