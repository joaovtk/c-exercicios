#include <locale.h>
#include <stdio.h>

int main(int argc, char **argv) {
  int number;

  printf("Digite um numero: ");

  scanf("%i", &number);

  printf("O dobro desse número é %d", number * 2);

  return 0;
}
