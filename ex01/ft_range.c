/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqangule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 14:25:57 by sqangule          #+#    #+#             */
/*   Updated: 2020/06/26 17:12:11 by sqangule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab_of_int;
	int		diff;
	int 	i;

	if (min >= max)
		return (NULL);
	diff = max - min;
	if (!(tab_of_int = (int *)malloc(sizeof(int) * diff)))
		return (NULL);
	i = 0;
	while (min < max)
	{
		tab_of_int[i] = min;
		i++;
		min++;
	}
	return (tab_of_int);
}
