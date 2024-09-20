int		ft_djamal(int i, int j, int k)
{
	if (i >= j && i >= k)
	{
		if (j >= k)
			return (j);
		else
			return (k);
	}
	if (j >= i && j >= k)
	{
		if (i >= k)
			return (i);
		else
			return (k);
	}
	if (k >= j && k >= i)
	{
		if (j >= i)
			return (j);
		else
			return (i);
	}
	return(i);
}
