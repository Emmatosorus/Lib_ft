/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epolitze <epolitze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:19:49 by epolitze          #+#    #+#             */
/*   Updated: 2023/11/10 13:17:51 by epolitze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlen(const char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 		i++;
// 	return (i);
// }

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t		j;
	size_t		i;

	i = -1;
	j = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[++i] != '\0' && n > 0)
	{
		if (haystack[i] == needle[j])
		{
			j++;
			if (j == ft_strlen(needle))
				return ((char *)haystack + (i - (j - 1)));
		}
		else
		{
			i = i - j;
			n = n + j;
			j = 0;
		}
		n--;
	}
	return (0);
}

// int	main(void)
// {
// 	char haystack[30] = "aaabcabcd";
// 	printf("%s", ft_strnstr(haystack, "abcd", 9));
// }