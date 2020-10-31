#include <stdio.h>
#include <string.h>

void ft_memcpy(void *dest, const void *str, size_t n);

int main()
{
	int a[] = {4, 6, 3, 6, 3, 26, 6};
	int b[] = {4, 0, 3, 0, 3 ,0 ,6};
	int c[] = {4, 6, 3, 6, 3, 46, 6};
	int d[] = {4, 0, 3, 0, 3 ,0 ,6};
	unsigned char memm[] = "кабы я была царица";
	unsigned char momm[] = "мне приснилась львица";
	unsigned char menn[] = "кабы я была царица";
	unsigned char mehh[] = "мне приснилась львица";

	ft_memcpy(memm, momm, 30);
	printf("%s", memm);
	printf("\n%s", momm);
printf("\n");
	memcpy(menn, mehh, 30);
	printf("%s", menn);
	printf("\n%s", mehh);
printf("\n");
	ft_memcpy(a, b, 28);
	for (int w = 0; w < 7; w++)
		printf("%d ", a[w]);
		printf("\n");
	for (int w = 0; w < 7; w++)
		printf("%d ", b[w]);
printf("\n");
	memcpy(c, d, 28);
	for (int w = 0; w < 7; w++)
		printf("%d ", c[w]);
		printf("\n");
	for (int w = 0; w < 7; w++)
		printf("%d ", d[w]);
printf("\n");
	return 0;
}
void ft_memcpy(void *dst, const void *src, size_t n)
{
   char *p = (char *)dst;
   char *w = (char *)src;
    int i = 0;
    while (n > 0)
    {
        p[i] = w[i];
        i++;
        n--;
    }
}