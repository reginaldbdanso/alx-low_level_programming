#include<stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Succcess)
 */
int main(void)
{
puts("Size of a char: %d byte(s)", sizeof(char));
puts("Size of a int: %d byte(s)", sizeof(int));
puts("Size of a long int: %d byte(s)", sizeof(long int));
puts("Size of a long long int: %d byte(s)", sizeof(long long int));
puts("Size of a float: %d byte(s)", sizeof(float));
return (0);
}
