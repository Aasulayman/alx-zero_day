#include <stdio.h>

/**
* main - calculate
*
* Return : always 0
*/
int add(void)
{
  int a, b, sum;
  printf("Enter numbers to add\n");
  scanf("%d%d", &a, &b);

  sum = a + b;

  printf("Addition: %d + %d = %d\n", a, b, sum);
}

int multiplicationof(void)
{
  int i, num, t, result;
printf("Multiples of:\n");
scanf("%d", &num);
printf("to:\n");
scanf("%d", &t);

 for (i = 1; i <= t; i++)
  {
    result = num * i;
    printf("%d * %d = %d\n", num, i, result);
  }
}

int main(void)
{
  add ();
  multiplicationof ();
}
