/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epolitze <epolitze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:38:24 by epolitze          #+#    #+#             */
/*   Updated: 2023/11/10 11:20:12 by epolitze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	int		len;

	ptr = (char *)s;
	len = 0;
	while (*ptr != '\0')
	{
		ptr++;
		len++;
	}
	while (*ptr != (char)c && len > 0)
	{
		ptr--;
		len--;
		if (*ptr == (char)c)
			return (ptr);
	}
	if (*ptr == (char)c)
		return (ptr);
	return (NULL);
}

// int	main(void)
// {
// 	printf("%s", ft_strrchr("bonjour", 'o'));
// }