#include <locale.h>
#include <stdio.h>

int main(int argc, char **argv) {
  setlocale(LC_ALL, "Portuguese");
  printf("Olá, mundo!!!");
  return 0;
}
