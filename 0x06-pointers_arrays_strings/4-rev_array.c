#include "main.h"
/**
 * reverse_array - reverses the content odf an array of intergers
 *@a: an array of intergers
 *@n: number of element of the array
 * Return: returns void
 */

void reverse_array(int *a, int n)
{
int *start_c, *end_c, c;
int i;

start_c = a;
end_c = a;

for (i = 0; i < n - 1; i++)
{
end_c++;
}

for (i = 0; i < n / 2; i++)
{

c = *end_c;
*end_c = *start_c;
*start_c = c;


start_c++;
end_c++;
}

}
