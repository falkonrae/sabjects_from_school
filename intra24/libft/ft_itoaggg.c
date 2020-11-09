#include <stdio.h>\




int n_size(int n)
{
    int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len += 1;
	while (n)
	{
		n /= 10;
		len += 1;
	}
	return (len);
}

int main()
{
    printf("%d\n", n_size(-24751));
    printf("%d\n", 2 % 10);
     printf("%d\n", 2 / 10);
    return (0);
}