#include <stdio.h>
#include <conio.h>

int main() {

  char sign;
  double first, second;
  clrscr();
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &sign);
  printf("Enter two operands: ");
  scanf("%lf %lf", &first, &second);

  switch (sign) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;
      default:
      printf("Error! operator is not correct");
      getch();
  }

  return 0;
}
