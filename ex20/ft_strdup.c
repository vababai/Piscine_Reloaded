/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjacks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 21:28:50 by kjacks            #+#    #+#             */
/*   Updated: 2018/11/24 00:46:18 by kjacks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (src[i])
		i++;
	str = (char*)malloc(sizeof(*str) * (i + 1));
	if (str == NULL)
		return (NULL);
	j = 0;
	while (j < i)
	{
		str[j] = src[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}
