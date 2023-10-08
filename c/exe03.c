#include <locale.h>
#include <stdio.h>

int main(int argc, char **argv) {
  float nota[3];
  int i = 0;
  float res = 0;

  for (i = 0; i < 3; i++) {
    printf("Digite o %d° numero: ", i + 1);
    scanf("%f", &nota[i]);
  }

  for (int i = 0; i < 3; i++) {
    res += nota[i];
  }

  res = res / 3;

  printf("A media entre os numeros é %.2f", res);

  return 0;
}
