/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epolitze <epolitze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:14:00 by epolitze          #+#    #+#             */
/*   Updated: 2023/11/09 20:09:51 by epolitze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	atoi_verif(char c)
{
	if ((c >= '0' && c <= '9') || c == '-' || c == '+')
		return (0);
	else if (c == '\n' || c == ' ')
		return (1);
	return (-1);
}

int	atoi_skip(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!str[i])
		return (-1);
	while (atoi_verif(str[i]) == 1)
		i++;
	if (atoi_verif(str[i]) == -1)
		return (-1);
	while (str[i] == '+' || str[i] == '-')
	{
		i++;
		count++;
	}
	if (count > 1)
		return (-1);
	if (str[i] < '0' || str[i] > '9')
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	long int	result;
	int			i;
	int			negative;

	result = 0;
	negative = 0;
	i = atoi_skip(str);
	if (i == -1)
		return (0);
	if (str[i - 1] == '-')
		negative = 1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	if (negative == 1)
		result = result * -1;
	return (result);
}

// int	main(void)
// {
// 	printf("%d", ft_atoi("\t\n\r\v\fd469 \n"));
// }