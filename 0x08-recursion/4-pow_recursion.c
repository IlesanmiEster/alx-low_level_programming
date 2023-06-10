#include "main.h"
/**
* _pow_recursion - Returns the value of x raised to power of y
* @x: The value to raise
* @y: Power
*  @y: power
*
* Return: result of the power
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
