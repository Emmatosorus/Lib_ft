/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epolitze <epolitze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:32:44 by epolitze          #+#    #+#             */
/*   Updated: 2023/11/07 13:33:00 by epolitze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = c;
		ptr++;
		n--;
	}
	return (s);
}
/*
int	main(void)
{
	char str[50] = "GeeksForGeeks is for programming geeks.";

	printf("\nBefore ft_memset(): %s\n", str);
	ft_memset(str + 13, '.', 8 * sizeof(char));
	printf("After ft_memset():  %s", str);
	//memset(str + 13, '.', 8 * sizeof(char));
	//printf("After memset():  %s", str);
}*/