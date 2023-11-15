/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epolitze <epolitze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:14:00 by epolitze          #+#    #+#             */
/*   Updated: 2023/11/15 15:49:52 by epolitze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	long	nb;
	long	i;
	long	sign;

	nb = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (nb != (nb * 10 + (str[i] - 48)) / 10)
			return ((int)(sign + 1) / 2 / -1);
		nb = (nb * 10) + (str[i++] - 48);
	}
	return (nb * sign);
}

// int    main(void)
// {
//     printf("My atoi : %d, ", ft_atoi("9223372036854775807"));
//     printf("true atoi : %d \n", atoi("9223372036854775807"));
//     printf("My atoi : %d, ", ft_atoi("-9223372036854775807"));
//     printf("true atoi : %d \n", atoi("-9223372036854775807"));
//     printf("My atoi : %d, ", ft_atoi("-92233720545545425454121254fffffff"));
//     printf("true atoi : %d \n", atoi("-92233720545545425454121254fffffff"));
//     printf("My atoi : %d, ", ft_atoi("922337203685456565654545454"));
//     printf("true atoi : %d \n", atoi("922337203685456565654545454"));
//     printf("Special case : whitespaces and - \"\\n\\t\\r\\v -42\" \n");
//     printf("Me %d, NM %d \n", ft_atoi("\n\t\r\v -42"), atoi("\n\t\r\v -42"));
//     printf("Special case : whitespaces alone \"\\n\\t\\r\\v42\" \n");
//     printf("Me %d, NM %d \n", ft_atoi("\n\t\r\v42"), atoi("\n\t\r\v42"));
//     printf("Me %d\n", ft_atoi("+ - 542"));
//     printf("Atoi %d\n", atoi("+ - 542"));
//     printf("Me %d\n", ft_atoi("-542qqqqqqqq"));
//     printf("Atoi %d\n", atoi("-542qqqqqqqq"));
//     printf("Me %d\n", ft_atoi("-+99"));
//     printf("Atoi %d\n", atoi("-+99"));
//     printf("Me %d\n", ft_atoi("+++99"));
//     printf("Atoi %d\n", atoi("+++99"));
//     printf("Me %d\n", ft_atoi("+++-99"));
//     printf("Atoi %d\n", atoi("+++-99"));
//     printf("Me %d\n", ft_atoi("---99"));
//     printf("Atoi %d\n", atoi("---99"));
//     printf("Me %d\n", ft_atoi("--+99"));
//     printf("Atoi %d\n", atoi("--+99"));
//     return (0);
// }