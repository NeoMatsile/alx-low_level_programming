#include <stdio.h>
/**
 * main - Entry point
 * return: Always 0 (Success)
 */
int main(void)
{
char c;
int d;
long int id;
long long int iid;
float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(id));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(iid));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

return (0);
}
