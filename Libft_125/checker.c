/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:30:55 by mbarra            #+#    #+#             */
/*   Updated: 2021/10/17 14:10:41 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	main(void)
// {
// 	const char	*str[0];

// 	str[0] = "";
// 	printf("ft_strlen: %lu\n", ft_strlen(*str));
// 	printf("strlen: %lu\n", strlen(*str));
// 	return (0);
// }

// int	main(void)
// {
// 	char	c;

// 	c = 'a';
// 	printf("ft_isalpha: %i\n", ft_isalpha(c));
// 	printf("isalpha: %i\n", isalpha(c));
// 	return (0);
// }

// int	main(void)
// {
// 	char	c;

// 	c = '1';
// 	printf("ft_isdigit %i\n", ft_isdigit(c));
// 	printf("isdigit %i\n", isdigit(c));
// }

// int	main(void)
// {
// 	char	c;

// 	c = '1';
// 	printf("ft_isalnum: %i\n", ft_isalnum(c));
// 	printf("isalnum: %i\n", isalnum(c));
// 	return (0);
// }

// int	main(void)
// {
// 	char	c;

// 	c = '~';
// 	c += 0;
// 	printf("ft_isascii: %i\n", ft_isascii(c));
// 	printf("isascii: %i\n", isascii(c));
// 	return (0);
// }

// int	main(void)
// {
// 	char	c;
// 	int		i;

// 	i = 0;
// 	c = 0;
// 	while (i != 128)
// 	{
// 		printf("ft_isprint: %i\n", ft_isprint(c));
// 		printf("isprint: %i\n", isprint(c));
// 		i++;
// 		c++;
// 	}
// 	return (0);
// }

// int	main(void)
// {
// 	int		c;
// 	int		n;
// 	char	s[] = "1234567890";

// 	n = 3;
// 	c = 'a';
// 	printf("ft_memset: %s\n", ft_memset(s, c, n));
// 	printf("memset: %s\n", memset(s, c, n));
// 	return (0);
// }

// int	main(void)
// {
// 	int		n;
// 	char	s[] = "1234567890";
// 	char	s1[] = "1234567890";

// 	n = 0;
// 	// printf("ft_bzero: %s\n", ft_bzero(s, n));
// 	printf("ft_bzero: %c\n", s[n]);
// 	printf("bzero: %s\n", bzero(s1, n));
// 	printf("bzero: %c\n", s1[n]);
// 	return (0);
// }

// int	main(void)
// {
// 	char	c[] = "456456";
// 	char	d[] = "012";
// 	int		n;

// 	n = 0;
// 	printf("ft_memcpy: %s\n", ft_memcpy(c, d, n));
// 	printf("memcpy: %s\n", memcpy(c, d, n));
// 	return (0);
// }

// int	main(void)
// {
// 	char	d[] = "1234567890";
// 	size_t	n;

// 	n = 3;
// 	printf("ft_memmove: %s\n", ft_memmove(&d[0], &d[1], n));
// 	printf("memmove: %s\n", memmove(&d[0], &d[1], n));
// 	return (0);
// }

// int	main(void)
// {
// 	char	c[] = "12341";
// 	char	d[] = "2234223";
// 	size_t size;

// 	size = 5;
// 	printf("ft_strlcpy: %lu\n", ft_strlcpy(c, d, size));
// 	printf("strlcpy: %lu\n", strlcpy(c, d, size));
// 	return (0);
// }

// int	main(void)
// {
// 	int	c;

// 	c = 12;
// 	printf("ft_toupper: %i\n", ft_toupper(c));
// 	printf("toupper: %i\n", toupper(c));
// 	return (0);
// }

// int	main(void)
// {
// 	int	c;

// 	c = 65;
// 	printf("ft_tolower: %i\n", ft_tolower(c));
// 	printf("tolower: %i\n", tolower(c));
// 	return (0);
// }

// int	main(void)
// {
// 	const char	*str[0];
// 	char		c;

// 	str[0] = "123456";
// 	c = '5';
// 	printf("ft_strchr: %s\n", ft_strchr(*str, c));
// 	printf("strchr: %s\n", strchr(*str, c));
// 	return (0);
// }

// int	main(void)
// {
// 	const char	*str[0];
// 	char		c;

// 	str[0] = "15234567";
// 	c = '2';
// 	printf("ft_strrchr: %s\n", ft_strrchr(*str, c));
// 	printf("strrchr: %s\n", strrchr(*str, c));
// 	return (0);
// }

// int	main(void)
// {
// 	char	s1[] = "12512123";
// 	char	s2[] = "125123";
// 	size_t n;

// 	n = 7;
// 	printf("ft_strncmp: %i\n", ft_strncmp(s1, s2, n));
// 	printf("strncmp: %i\n", strncmp(s1, s2, n));
// }

// int	main(void)
// {
// 	char		*s[0];
// 	int			c;
// 	size_t		n;

// 	s[0] = "a12345645667"; 
// 	c = '6';
// 	n = 10;
// 	printf("ft_memchr: %s\n", ft_memchr(*s, c, n));
// 	printf("memchr: %s\n", memchr(*s, c, n));
// 	return (0);
// }

// int	main(void)
// {
// 	const char	*str[0];
// 	str[0] = "2121231233";

// 	printf("ft_strdup: %p\n", ft_strdup(*str));
// 	return (0);	
// }

// int	main(void)
// {
// 	char	s1[] = "1";
// 	char	s2[] = "1";
// 	size_t n;

// 	n = 2;
// 	printf("ft_memcmp: %i\n", ft_memcmp(s1, s2, n));
// 	printf("memcmp: %i\n", memcmp(s1, s2, n));
// }

// int	main(void)
// {
// 	char				*s[0];
// 	unsigned int		start;
// 	size_t				len;

// 	s[0] = "1";
// 	start = 0;
// 	len = 0;
// 	printf("ft_substr: %s\n", ft_substr(*s, start, len));
// 	return (0);
// }

// int	main(void)
// {
// 	const char	*nptr[0];

// 	nptr[0] = "9999999999999999999999999";
// 	printf("ft_atoi: %i\n", ft_atoi(*nptr));
// 	printf("atoi: %i\n", atoi(*nptr));
// 	return (0);
// }

// int	main(void)
// {
// 	char	*s1[0];
// 	char	*s2[0];

// 	s1[0] = "123";
// 	s2[0] = "456";
// 	printf("ft_strjoin: %s\n", ft_strjoin(*s1, *s2));
// 	return (0);
// }

// int	main(void)
// {
// 	char	*s1[0];
// 	char	*set[0];

// 	s1[0] = "1234567890";
// 	set[0] = "10";
// 	printf("ft_strtrim: %s\n", ft_strtrim(*s1, *set));
// 	return (0);
// }

// int	main(void)
// {
// 	long long int	c;

// 	c = -100111111111112312312311;
// 	printf("ft_intlen: %zu\n", ft_intlen(c));
// 	return (0);
// }

// int	main(void)
// {
// 	int	c;

// 	c = -121230;
// 	printf("ft_itoa: %s\n", ft_itoa(c));
// 	return (0);
// }

// int	main(void)
// {
// 	char	c;
// 	int		fd;

// 	c = 'x';
// 	fd	=	0;
// 	printf("ft_putchar_fd: %i\n", ft_putchar_fd(c, fd));
// 	return (1);
// }

// int	main(void)
// {
// 	char	*str[0];
// 	int		fd;

// 	fd = 1;
// 	str[0] = "123";
// 	ft_putstr_fd(*str, fd);
// 	return (0);
// }

// int	main(void)
// {
// 	char	*str[0];
// 	int		fd;

// 	fd = 1;
// 	str[0] = "123";
// 	ft_putendl_fd(*str, fd);
// 	return (0);
// }

// int	main(void)
// {
// 	int	n;
// 	int	fd;

// 	n = 44;
// 	fd = 1;
// 	ft_putnbr_fd(n, fd);
// 	putnbr(n);
// 	write(fd, "\n", 1);
// 	return (0);
// }

// int	main(void)
// {
// 	char	*str;
// 	size_t	size;
// 	size_t 	nmemb;

// 	size = 2;
// 	nmemb = 1;
// 	printf("ft_calloc: %s\n", ft_calloc(nmemb, size));
// 	return (0);
// }

// int		main(void)
// {
// 	char	dst[50];
// 	char	*src[0];
// 	int		size;

// 	src[0] = "";
// 	size = 10;
// 	printf("ft_strlcpy: %lu\n", ft_strlcpy(dst, *src, sizeof(dst)));
// 	printf("strlcpy: %lu\n", strlcpy(dst, *src, sizeof(dst)));
// 	return (0);
// }

// int	main(void)
// {
// 	char	*str[0];
// 	char	c;
// 	int		i;
// 	char	**j;

// 	i = 0;
// 	c = 'a';
// 	str[0] = "a1234a567aa1890a";
// 	j = ft_split(*str, c);
// 	while (i < 3)
// 	{
// 		printf("ft_split: %s\n", j[i]);
// 		i++;
// 	}
// }

// int		main(void)
// {
// 	char	dst[50];
// 	char	*src[0];
// 	int		size;

// 	src[0] = "12312";
// 	printf("ft_strlcat: %lu\n", ft_strlcat(dst, *src, 50));
// 	printf("strlcat: %lu\n", strlcat(dst, *src, 50));
// 	return (0);
// }

// int	main(void)
// {
// 	char	*str1[0];
// 	char	*str2[0];
// 	size_t	len;

// 	str1[0] = "12345";
// 	str2[0] = "23";
// 	len = 4;
// 	printf("ft_strnst: %s\n", ft_strnstr(*str1, *str2, len));
// 	printf("strnst: %s\n", strnstr(*str1, *str2, len));
// 	return (0);
// }

// char	f(unsigned int	i, char	c)
// {
// 	char	str;
// 	str = c + 1;
// 	return (str);
// }
// int main(void)
// {
// 	char *str[0];

// 	str[0] = "012345";
// 	printf("ft_strmapi: %s\n", ft_strmapi(*str, *f));
// }

// int main(void)
// {
// 	char	*s1[0];
// 	char	*set[0];

// 	s1[0] = "123456";
// 	set[0] = "15";
// 	printf("ft_strtrim: %s\n", ft_strtrim(*s1, *set));
// 	return (0);
// }