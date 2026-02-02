#incluce <stdio.h>

void	ft_swap(int *a, int *b)
{
	*a = *b;
	*b = *a;
}

int	main()
{
	int	var_a;
	int	var_b;

	var_a = 5;
	var_b = 10;

	printf("var a : %i\n", var_a);
	printf("var b : %i\n", var_b);
	ft_swap(&var_a, &var_b);
	printf("SWAP DES VALEURS\n");
	printf("var a : %i\n", var_a);
	printf("var b : %i\n", var_b);

	return (0);
}