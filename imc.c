#include <stdio.h>

int main()
{
  float altura, peso, imc;

  printf("Informe a sua altura em metros: ");
  scanf("%f", &altura);

  printf("Informe o seu peso em quilos: ");
  scanf("%f", &peso);

  imc = peso / (altura * altura);

  printf("Seu IMC é: %.2f", imc);

  return 0;
}