int p_char(va_list list)
{
	int ch_c = 0;

	char ch = (va_arg(list, int));
	_putchar(ch);
	ch_c++;

	return (ch_c);
}

int p_str(va_list list) 
{
	int c = 0;
	int ch_c = 0;

	char *str = va_arg(list, char *);

	for (c = 0; str[c] != '\0'; c++)
	{
		_putchar(str[c]);
		ch_c++;
	}

	return (ch_c);
}
