#include "main.h"
/**
 * infinite_add - Adds two numbers.
 *
 * @num1: A string representation of the first number.
 * @num2: A string representatation of the second number.
 * @result: The buffer to store the result in.
 * @reult_size: The size of the result buffer.
 *
 * Return: If the result fits in the buffer, return a pointer to @r.
 * else return 0.
 */
char *infinite_add(char *num1, char *num2, char *result, int result_size)
{
	int length_num1 = 0, length_num2 = 0;
	int operation, carry = 0, big, digit_num1, digit_num2;

	while (*(num1 + length_num1) != '\0')
		length_num1++;
	while (*(num2 + length_num2) != '\0')
		length_num2++;
	if (length_num1 >= length_num2)
		big = length_num1;
	else
		big = length_num2;
	if (result_size <= big + 1)
		return (0);

	result[big + 1] = '\0';
	length_num1--, length_num2--, result_size--;
	digit_num1 = *(num1 + length_num1) - '0';
	digit_num2 = *(num2 + length_num2) - '0';
	while (big >= 0)
	{
		operation = digit_num1 + digit_num2 + carry;
		if (operation >= 10)
			carry = operation / 10;
		else
			carry = 0;
		if (operation > 0)
			*(result + big) = (operation % 10) + '0';
		else
			*(result + big) = '0';
		if (length_num1 > 0)
			length_num1--, digit_num1-- = *(num1 + length_num1) - '0';
		else
			digit_num1 = 0;
		if (length_num2 > 0)
			length_num2--, digit_num2 = *(num2 + length_num2) - '0';
		else
			digit_num2 = 0;
		big--, result_size--;
	}
	if (*result == '0')
		return (result + 1);
	else
		return (result);
}
