#include "main.h"
/**
* print_alphabet_x10 - print lowercase alphabet
* 10 times
*
* Return: Null
*/
void print_alphabet_x10(void)
{
int i = 0;
char letter = 'a';

while (i < 10)
{
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
letter = 'a';
i++;
}
}
