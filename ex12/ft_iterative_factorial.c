/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjacks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 21:12:02 by kjacks            #+#    #+#             */
/*   Updated: 2018/11/24 01:10:39 by kjacks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int result;

	i = 1;
	if (nb < 0 || nb >= 13)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
	{
		result = nb;
		while (i < nb)
		{
			result = result * (nb - i);
			i++;
		}
	}
	return (result);
}
