/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epolitze <epolitze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:19:49 by epolitze          #+#    #+#             */
/*   Updated: 2023/11/09 15:12:22 by epolitze         ###   ########.fr       */
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

char	*ft_strnstr(char *haystack, char *needle, size_t n)
{
	size_t		j;
	size_t		i;

	i = 0;
	j = 0;
	if (ft_strlen(needle) < 1)
		return (haystack);
	while (haystack[i] != '\0' && n > 0)
	{
		if (haystack[i] == needle[j])
		{
			j++;
			if (j == ft_strlen(needle))
				return (haystack + (i - (j - 1)));
		}
		else
		{
			i = i - j;
			j = 0;
		}
		i++;
		n--;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("%s", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 0));
// }