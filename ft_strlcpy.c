/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epolitze <epolitze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:58:46 by epolitze          #+#    #+#             */
/*   Updated: 2023/11/08 11:06:00 by epolitze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && size - 1 > 0)
		{
			dest[i] = src[i];
			i++;
			size--;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

// int	main(void)
// {
// 	char	dest[15];
// 	int		r;

// 	printf("%s", dest);
// 	r = ft_strlcpy(dest, "lorem ipsum dolor sit amet", 0);
// 	printf("\n%s", dest);
// 	printf("\n%d", r);
//  }