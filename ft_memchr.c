/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epolitze <epolitze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:02:09 by epolitze          #+#    #+#             */
/*   Updated: 2023/11/09 10:30:30 by epolitze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (*ptr != (unsigned char)c && n - 1 > 0)
	{
		if (*ptr == (unsigned char)c)
			return (ptr);
		ptr++;
		n--;
	}
	if (*ptr == (unsigned char)c)
		return (ptr);
	return (NULL);
}

// int	main(void)
// {
// 	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};

// 	printf("%s", (char *)ft_memchr(tab, -1, 7));
// 	printf("\n%s", (char *)memchr(tab, -1, 7));
// }