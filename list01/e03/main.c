#include <stdio.h>

int main() {

  char operator;
  int number_a, number_b;

  printf("Digite o operador (+, -, / ou *): ");
  scanf("%c", &operator);

  printf("Digite o primeiro número: ");
  scanf("%d", &number_a);

  printf("Digite o segundo número: ");
  scanf("%d", &number_b);

  if (operator == '+') {
    printf("%d \n", number_a + number_b);
  } else if (operator == '-') {
    printf("%d \n", number_a - number_b);
  } else if (operator == '/') {
    printf("%d \n", number_a / number_b);
  } else if (operator == '*') {
    printf("%d \n", number_a * number_b);
  }

  return 0;
}