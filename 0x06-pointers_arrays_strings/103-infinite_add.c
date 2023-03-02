#include "main.h"
/**
 * infinite_add - Adds two numbers.
 *
 * @num1: A string representation of the first number.
 * @num2: A string representatation of the second number.
 * @result: The buffer to store the result in.
 * @result_size: The size of the result buffer.
 *
 * Return: If the result fits in the buffer, return a pointer to @r.
 * else return 0.
 */
char *infinite_add(char *num1, char *num2, char *result, int result_size)
{
	int length_num1 = 0, length_num2 = 0;
	int operation, carry = 0, big, digit_num1, digit_num2;

	while (*(num1 + length_num1))
		length_num1++;
	while (*(num2 + length_num2))
		length_num2++;
	big = (length_num1 >= length_num2) ? length_num1 : length_num2;
	if (result_size <= big + 1)
		return (0);
	result[big + 1] = '\0';
	length_num1--, length_num2--, result_size--;
	digit_num1 = *(num1 + length_num1) - '0';
	digit_num2 = *(num2 + length_num2) - '0';
	while (big >= 0)
	{
		operation = digit_num1 + digit_num2 + carry;
		carry = (opertion >= 10) ? operation / 10 : 0;
		*(result + big) = (operation > 0) ? ((operation % 10) + '0') : '0';
		digit_num1 = (length_num1 > 0) ? *(--num1 + length_num1 - 1) - '0' : 0;
		digit_num2 = (length_num2 > 0) ? *(--num2 + length_num2 - 1) - '0' : 0;
		big--, result_size--;
	}
	while (*reslut == '0' && *(result + 1) != '\0')
		result++;
	return (result);
}
