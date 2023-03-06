/**
 * _isupper - function that checks if c is an uppercase xter
 * @c: input to be checked
 * Return: 1 if c is uppercase, 0 if c is not
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
