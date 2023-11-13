/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epolitze <epolitze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:10:30 by epolitze          #+#    #+#             */
/*   Updated: 2023/11/13 15:05:25 by epolitze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nlen(long int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count = 1;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	size_t		count;
	long int	nsave;
	long int	nlong;
	char		*number;

	count = 0;
	nsave = n;
	nlong = n;
	count = ft_nlen(nlong);
	number = (char *)malloc(count + 1 * sizeof(char));
	if (!number)
		return (NULL);
	if (nlong < 0)
		nlong *= -1;
	number[count] = '\0';
	while (count-- > 0 && n != 0)
	{
		number[count] = (nlong % 10) + 48;
		nlong = nlong / 10;
	}
	if (n == 0)
		number[0] = '0';
	if (nsave < 0)
		number[0] = '-';
	return (number);
}

// int	main(void)
// {
// 	char	*str;

// 	str = ft_itoa(-42);
// 	printf("%s\n", str);
// 	free(str);
// }