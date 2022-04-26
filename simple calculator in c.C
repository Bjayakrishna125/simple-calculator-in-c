#include <stdio.h>

int main() {

  char sign;
  int first, second;
  clrscr();
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &sign);
  printf("Enter two operands: ");
  scanf("%d %d", &first, &second);

  switch (sign) {
    case '+':
      printf("%.1d+%.1d=%.1d", first, second, first+second);
      break;
    case '-':
      printf("%.1d-%.1d=%.1d", first, second, first-second);
      break;
    case '*':
      printf("%.1d*%.1d=%.1d", first, second, first*second);
      break;
    case '/':
      printf("%.1d/%.1d=%.1d", first, second, first/second);
      break;
      default:
      printf("the operator you have inserted is in correct.");
      getch();
  }

  return 0;
}
