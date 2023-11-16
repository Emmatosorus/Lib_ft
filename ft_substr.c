/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epolitze <epolitze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:02:55 by epolitze          #+#    #+#             */
/*   Updated: 2023/11/16 12:01:16 by epolitze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*sub;
	size_t		sublen;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		sub = ft_calloc(1, sizeof(char));
		if (!sub)
			return (NULL);
	}
	else
	{
		sublen = ft_strlen(s + start);
		if (sublen >= len)
			sublen = len;
		sub = ft_calloc((sublen + 1), sizeof(char));
		if (!sub)
			return (NULL);
		while (sublen--)
			sub[sublen] = s[start + sublen];
	}
	return (sub);
}

// int	main(void)
// {
// 	char	*sub;

// 	sub = ft_substr("i just want this part #############", 5, 20);
// 	printf("%s", sub);
// 	free(sub);
// }
