#include <stdio.h>
int add();
int sub();
int mul();
int div();
int mod();
int main()
{
  int add0;
  int sub0;
  int mul0;
  int div0;
  int mod0;
  int n1;
  int n2;
  char oper;
  printf("Enter a Number >>");
  scanf("%d", &n1);
  printf("Enter a Number >>");
  scanf("%d", &n2);
  getchar();
  printf("Enter '+' for Addition\n");
  printf("Enter '-' for Subtraction\n");
  printf("Enter '*' for Multiplication\n");
  printf("Enter '/' for Division\n");
  printf("Enter '%' for Remainder\n");
  printf("Enter a Number depending on the Operation of your choice >>");
  scanf("%c", &oper);
  switch(oper)
  {
    case '+':
      add0 = add(n1, n2);
      printf("Answer is %d", add0);
      break;
      
    case '-':
      sub0 = sub(n1, n2);
      printf("Answer is %d", sub0);
      break;
      
    case '*':
      mul0 = mul(n1, n2);
      printf("Answer is %d", mul0);
      break;
      
    case  '/':
      div0 = div(n1, n2);
      printf("Answer is %d", div0);
      break;
      
    case '%':
      mod0 = mod(n1, n2);
      printf("Answer is %d", mod0);
      break;
      
    default:
      printf("Not an operator");
      break;
  }
  getchar();
}

int add(int n1, int n2)
{
  int add0 = n1 + n2;
  return add0;
}

int sub(int n1, int n2)
{
  int sub0 = n1 - n2;
  return sub0;
}

int mul(int n1, int n2)
{
  int mul0 = n1 * n2;
  return mul0;
}

int div(int n1, int n2)
{
  int div0 = n1 / n2;
  return div0;
}

int mod(int n1, int n2)
{
  int mod0 = n1 % n2;
  return mod0;
}
