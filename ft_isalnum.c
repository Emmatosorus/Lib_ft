/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epolitze <epolitze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:22:03 by epolitze          #+#    #+#             */
/*   Updated: 2023/11/07 11:12:16 by epolitze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')))
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*
int	main(void)
{
	char	c = '5';
	int	r = ft_isalnum(c);
	int	f = isalnum(c);

	printf("ft_isalnum : %d\n", r);
	printf("isalnum : %d", f);
}*/