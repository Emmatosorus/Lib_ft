/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epolitze <epolitze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:30:20 by epolitze          #+#    #+#             */
/*   Updated: 2023/11/15 17:02:45 by epolitze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	len;
	char	*dest;

	i = 0;
	len = 0;
	while (s[len] != '\0')
		len++;
	dest = (char *)ft_calloc(len + 1, sizeof(char));
	if (!dest)
		return (NULL);
	while (len > i)
	{
		dest[i] = s[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	*cpy;

// 	cpy = ft_strdup("hello");
// 	printf("%s", cpy);
// 	free(cpy);
// 	cpy = NULL;
// }
