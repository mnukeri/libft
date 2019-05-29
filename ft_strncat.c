#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t p;
	size_t k;

	p = 0;
	while (s1[p] != '\0')
	{
		p++;
	}
	k = 0;
	while (s2[k] != '\0' && k < n)
	{
		s1[p + k] = s2[k];
		k++;
	}
	s1[p + k] = '\0';
	return (s1);
}
