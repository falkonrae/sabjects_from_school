static int ft_count_words(const char *s, char c) //считать количество слов - подстрок в строке s
{
	int count;
	count = 0;
	while (1)
	{
		while (*s == c)
			s++;
		if (*s == '\0')
			return count;
		count++;
		while (*s != c && *s != '\0')
			s++;
	}
}
static int ft_word_length(const char *s, char c)
{
	int length;
	length = 0;
	while(*s != c && *s != '\0')
	{
		s++; // переход к следующему символу в строке s
		length++; // подсчет количества символов
	}
	return length;
}
static void *ft_free_strs(char **ss)
{
	while (*ss != NULL)
	{
		free(*ss);
		ss++;
	}
	free(ss);
	return NULL;
}
char	**ft_split(char const *s, char c)
{
	char **ss;
	int i;
	int word_length;
	
	// каллок нужен, чтобы сэкономить количество строк и обнулить массив строк s,
	// чтобы внутри массива не было адресов - это надо, чтобы работала функция
	// ft_free_strs
	if ((ss = (char**)ft_calloc((ft_count_words(s, c) + 1), sizeof(char*))) == NULL)
		return NULL;
	i = 0;
	while (1)
	{
		while (*s == c)
			s++;
		if (*s == '\0')
			return ss;
		word_length = ft_word_length(s, c);
		if ((ss[i] = (char*)ft_calloc(word_length + 1, sizeof(char))) == NULL)
			return ft_free_strs(ss);
		ft_strlcpy(ss[i], s, word_length + 1);
		i++;
		s = s + word_length;
	}
}