#include <calculator_operations.h>

int add(int operand1, int operand2)
{
    return operand1 + operand2;
}

int subtract(int operand1, int operand2)
{
    return operand1 - operand2;
}

int multiply(int operand1, int operand2)
{
    return operand1 * operand2;
}

int divide(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}

int factorial(int number)
{
  /* Return -1 for negative numbers */
  if(number < 0)
    return -1;

  /* Return 1 for 0 */
  if(number == 0)
    return 1;

  /* Recursively calculate Factorial of the number */
  return number * factorial(number-1);
}
