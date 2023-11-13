/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epolitze <epolitze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:53:24 by epolitze          #+#    #+#             */
/*   Updated: 2023/11/13 12:10:07 by epolitze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_word_count(char const *str, char sep)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != sep && (str[i + 1] == sep || str[i + 1] == 0))
			j++;
		i++;
	}
	return (j);
}

void	ft_free(char **splits, int j)
{
	while (j-- != 0)
		free(splits[j]);
	free(splits);
}

int	ft_skip_sep(int i, char sep, char const *str)
{
	while (str[i] == sep)
		i++;
	return (i);
}

int	ft_split_asssit(size_t wcount, char const *str, char sep, char **splits)
{
	size_t	i;
	size_t	j;
	size_t	count;

	i = 0;
	j = 0;
	while (str[i] != '\0' && wcount != 0 && wcount != j)
	{
		count = 0;
		i = ft_skip_sep(i, sep, str);
		while (str[i] != sep && str[i] != '\0')
		{
			count++;
			i++;
		}
		splits[j] = (char *)malloc(count + 1 * sizeof(char));
		if (!splits[j])
		{
			ft_free(splits, j);
			return (-1);
		}
		ft_strlcpy(splits[j], (str + (i - count)), count + 1);
		j++;
	}
	return (0);
}

char	**ft_split(char const *str, char sep)
{
	size_t	wcount;
	char	**splits;

	wcount = ft_word_count(str, sep);
	splits = (char **)malloc((wcount + 1) * sizeof(char *));
	if (!splits)
		return (NULL);
	splits[ft_word_count(str, sep)] = 0;
	if (ft_split_asssit(wcount, str, sep, splits) == -1)
		return (NULL);
	return (splits);
}

// int	main(int argc, char **argv)
// {
// 	char	**strs;
// 	int		i;

// 	argc = 1;
// 	i = 0;
// 	strs = ft_split(argv[argc], '+');
// 	while (strs[i])
// 	{
// 		printf("%s\n", strs[i]);
// 		free(strs[i]);
// 		i++;
// 	}
// 	free(strs[i]);
// 	free(strs);
// }