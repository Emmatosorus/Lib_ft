/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epolitze <epolitze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 11:07:39 by epolitze          #+#    #+#             */
/*   Updated: 2023/11/11 19:32:46 by epolitze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && size - 1 > 0)
		{
			dest[i] = src[i];
			i++;
			size--;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

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

void	ft_free(char **strs, int j)
{
	while (j-- != 0)
		free(strs[j]);
	free(strs);
}

int	dopefunc(int *i, const char *str, char sep)
{
	int	count;

	count = 0;
	while ((str[*i] != sep && str[*i] != 0))
	{
		count++;
		*i += 1;
	}
	*i -= 1;
	return (count);
}

char	**ft_split_but_shush(char **splits, const char *str, char sep)
{
	int		i;
	int		j;
	int		count;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		count = dopefunc(&i, str, sep);
		printf("\nApres count %d	%c\n", count, str[i]);
		if (str[i - 1] != sep && (str[i] == sep || str[i] == 0))
		{
			splits[j] = (char *)malloc(count + 1 * sizeof(char));
			if (!splits[j])
			{
				ft_free(splits, j);
				return (NULL);
			}
			ft_strlcpy(splits[j], (str + (i - count)), count + 1);
			j++;
		}
		count = 0;
		i++;
	}
	splits[j] = 0;
	return (splits);
}

char	**ft_split(char const *str, char sep)
{
	size_t	nbwords;
	char	**splits;

	if (!str)
		return (NULL);
	nbwords = ft_word_count(str, sep);
	splits = (char **)malloc((nbwords + 2) * sizeof(char *));
	if (!splits)
		return (NULL);
	splits = ft_split_but_shush(splits, str, sep);
	return (splits);
}

int	main(int argc, char **argv)
{
	char	**strs;
	int		i;

	argc = 1;
	i = 0;
	strs = ft_split(argv[argc], '+');
	while (strs[i])
	{
		printf("%s\n", strs[i]);
		free(strs[i]);
		i++;
	}
	free(strs[i]);
	free(strs);
}
