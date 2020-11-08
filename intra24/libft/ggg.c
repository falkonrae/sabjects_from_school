#include <string.h>
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}
/*
char	*ft_strrchr(const char *s, int c)
{
	char	*mas;
	char	sym;
	int		i;

	i = ft_strlen(s);
	mas = (char *)s;
	sym = (char)c;
	while (i >= 0)
	{
		if (mas[i] == sym)
			return (&mas[i]);
		i--;
	}
	return (0);
}

char	*ft_strchr(const char *s, int c)
{
	char	*mas;
	char	sym;
	int		i;

	i = 0;
	mas = (char *)s;
	sym = (char)c;
	while (mas[i] != '\0')
	{
		if (mas[i] == sym)
			return (&mas[i]);
		i++;
	}
	if (mas[i] == sym)
		return (&mas[i]);
	return (NULL);
}
*/
static int
	ft_char_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char
	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	while (s1[start] && ft_char_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_char_in_set(s1[end - 1], set))
		end--;
	str = (char*)malloc(sizeof(*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = 0;
	return (str);
}
int		main()
{
	const char s[] = "ko   ko  mo k    ko komoloko molokokokokokoko";
	const char d[] = "ko";
	printf("%s", ft_strtrim(s, d));
	return 0;
}