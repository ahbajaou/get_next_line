/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 15:38:06 by ahbajaou          #+#    #+#             */
/*   Updated: 2022/12/24 20:25:18 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_strchr(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*ft_substr(char *s, int start, int len)
{
	int		i;
	char	*ptr;
	int		j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (start >= (int)ft_strlen(s))
		len = 0;
	while (i < len && s[i])
		i++;
	ptr = malloc ((i + 1));
	if (!ptr)
		return (NULL);
	while (j < i)
		ptr[j++] = s[start++];
	ptr[j] = '\0';
	return (ptr);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new;
	int		i;
	int		j;
	int		k;

	new = malloc ((ft_strlen(s2) + ft_strlen(s1)) + 1);
	if (!new)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	while (i < j)
	{
		new[i] = s1[i];
		i++;
	}
	j = ft_strlen(s2);
	k = 0;
	while (k < j)
		new[i++] = s2[k++];
	new[i] = 0;
	free (s1);
	return (new);
}
