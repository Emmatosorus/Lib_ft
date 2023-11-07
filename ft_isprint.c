/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epolitze <epolitze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:49:38 by epolitze          #+#    #+#             */
/*   Updated: 2023/11/07 09:39:16 by epolitze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*
int	main(void)
{
	char	c = '5';
	int	r = ft_isprint(c);
	int	f = isprint(c);

	printf("ft_isprint : %d\n", r);
	printf("isprint : %d", f);
}*/