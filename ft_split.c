/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagemura <sagemura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 11:34:20 by sagemura          #+#    #+#             */
/*   Updated: 2023/06/25 08:37:09 by sagemura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_word_count(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

char	**allocate_result_array(int count)
{
	return (malloc(sizeof(char *) * (count + 1)));
}

void	free_result_array(char **result, int count)
{
	while (count--)
		free(result[count]);
	free(result);
}

char	*find_next_word(char const *s, char c, char **word_end)
{
	while (*s == c)
		s++;
	*word_end = ft_strchr(s, c);
	if (!*word_end)
		*word_end = ft_strchr(s, '\0');
	return ((char *)s);
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	char	**result;
	int		i;
	char	*word_start;
	char	*word_end;

	word_count = get_word_count(s, c);
	result = allocate_result_array(word_count);
	if (!result)
		return (NULL);
	i = 0;
	while (i < word_count)
	{
		word_start = find_next_word(s, c, &word_end);
		result[i] = ft_strndup(word_start, word_end - word_start);
		if (!result[i])
		{
			free_result_array(result, i);
			return (NULL);
		}
		s = word_end;
		i++;
	}
	result[i] = NULL;
	return (result);
}
