/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epolitze <epolitze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:45:58 by epolitze          #+#    #+#             */
/*   Updated: 2023/11/07 11:12:20 by epolitze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')))
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	c = 10;
	int	r = ft_isalpha(c);
	int	f = isalpha(c);

	printf("isalpha : %d\n", r);
	printf("ft_isalpha : %d", f);
}*/