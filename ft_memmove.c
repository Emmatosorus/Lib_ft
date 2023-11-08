/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epolitze <epolitze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:37:07 by epolitze          #+#    #+#             */
/*   Updated: 2023/11/08 13:18:25 by epolitze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*destc;
	unsigned char	*srcc;

	destc = (unsigned char *)dest;
	srcc = (unsigned char *)src;
	if (destc < srcc)
	{
		while (n--)
		{
			*destc = *srcc;
			destc++;
			srcc++;
		}
	}
	else
	{
		while (n--)
			*(destc + n) = *(srcc + n);
	}
	return (dest);
}

/*
int	main(void)
{
    char str[100] = "Learningisfun"; 
    char *first, *second; 
    first = str; 
    second = str;
	printf("Original string :%s\n", str); 
	memcpy(first + 8, first, 10); 
    printf("memmove overlap : %s\n", str);
	ft_memmove(second + 8, first, 10);
    printf("ft_memmove overlap :%s", str); 
}*/