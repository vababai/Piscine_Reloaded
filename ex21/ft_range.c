/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjacks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 21:33:04 by kjacks            #+#    #+#             */
/*   Updated: 2018/11/24 00:02:28 by kjacks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*arr;
	int		i;

	if (min >= max)
		return (NULL);
	arr = (int*)malloc(sizeof(*arr) * (max - min));
	i = 0;
	while (max > min)
		arr[i++] = min++;
	return (arr);
}
