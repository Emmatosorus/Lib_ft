/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epolitze <epolitze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:32:32 by epolitze          #+#    #+#             */
/*   Updated: 2023/11/10 12:35:15 by epolitze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (n - 1 > 0)
	{
		if (*ptr1 != *ptr2)
			return (*ptr1 - *ptr2);
		ptr1++;
		ptr2++;
		n--;
	}
	if (*ptr1 != *ptr2)
		return (*ptr1 - *ptr2);
	return (0);
}

// int	main(void)
// {
// 	printf("%d", ft_memcmp("abcdefghij", "abcdefgxyz", 7));
// 	printf("\n%d", memcmp("abcdefghij", "abcdefgxyz", 7));
// }