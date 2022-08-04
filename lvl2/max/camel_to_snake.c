int max(int *tab, unsigned int len)
{
	int max;

	if (!len)
		return (0);
	max = tab[--len];
	while (len--)
		if (tab[len] > max)
			max = tab[len];
	return (max);
}


































int		max(int* tab, unsigned int len)
{
	int i;
	int tmp;

	i = 1;
	while (i < len - 1)
	{
		if (tab[i] < tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = -1;
		}
		i++;
	}
	return (tab[0]);
}

























int		max(int *tab, unsigned int len)
{
	int		i;							/* Обьявим переменную для счетчика */
	int		max_value;					/* Обьявим переменную для хранения максмального значения */

	max_value = 0;
	if (tab)							/* проверяем есть ли в указателе tab адресс массива и идем дальше */
	{
		i = 0;							/* Инициализируем счетчик нулем чтобы начать с нулевой ячейки массива */
		max_value = tab[0];				/* Инициализируем переменную представив что нулевой элемент массива максимальный */
		while (i < len)					/* запускаем цикл ищущий максимальное число столько раз сколько в массиве чисел */
		{
			if(tab[i] > max_value)		/* сравниваем каждую ячейку с минимальным числом */
				max_value = tab[i];		/* значит это максимальное значение и мы сохраняем число в "max_value" */
			i++;						/* переходим к след ячейке */
		}
	}
	return (max_value);					/* после проверки массива возвращаем число, которое мы нашли */
}

/*
int		main(void)
{
	int	arr[] = { 1,2,4,7,3,5,6,9};

	ft_putchar(max(arr, 8) + '0');
	ft_putchar('\n');
	return (0);
}
*/
