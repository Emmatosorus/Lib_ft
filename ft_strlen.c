/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epolitze <epolitze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:28:46 by epolitze          #+#    #+#             */
/*   Updated: 2023/11/07 09:39:37 by epolitze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	while (str[i])
		i++;
	return (i);
}
/*
int	main(void)
{
	char	*str;

	str = "hello";
	printf("%d", ft_strlen(str));
}*/