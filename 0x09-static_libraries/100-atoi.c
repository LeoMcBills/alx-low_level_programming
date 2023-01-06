/**
 * _atoi - This function converts a string into an integer
 * @s: parameter of type char
 * Return: (num * sign)
 */

int _atoi(char *s)
{
	char *temp;
	int sign;
	unsigned int num;

	temp = s;
	num = 0;
	sign = 1;
	while (*temp != '\0' && (*temp < '0' || *temp > '9'))
	{
		if (*temp == '-')
			sign *= -1;
		temp++;
	}
	if (*temp != '\0')
	{
		do {
			num = num * 10 + (*temp - '0');
			temp++;
		} while (*temp >= '0' && *temp <= '9');
	}
	return (num * sign);
}
