/**
 * leet - Encodes a string into 1337
 *
 * @str: String to encode
 * Return: Pointer to the encoded string
 */
char *leet(char *str)
{
	char *letters = "aAeEoOtTlL";
	char *numbers = "4433007711"
		int i, j;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; letter[j]; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = numbers[j];
				break;
			}
		}
	}

	return (str);
}
