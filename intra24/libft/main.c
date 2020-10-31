#include <stdio.h>
#include <string.h>
void ft_memset(void *dest, int c, size_t n);

int main()
{
	int i[] = {4,6 ,3 ,6,3 ,46,6};
	int b[] = {4,6 ,3 ,6,3 ,46,6};
	char mid[] = "И что вы мне сделаете?";
	ft_memset(i, 0, 5);
	ft_memset(mid, '?', 8);
	for (int a = 0; a < 7; a++)
		printf("%d ", i[a]);
	printf("\n");
	printf("%s ", memset(b, 0, 5)); 
	printf("%s", mid);
	return 0;
}
