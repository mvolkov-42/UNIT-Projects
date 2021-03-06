/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dfg.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 19:32:31 by mvolkov           #+#    #+#             */
/*   Updated: 2017/09/23 19:32:31 by mvolkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sqrt(int nb)
{
	int i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i * i < nb)
		i++;
	return (i * i == nb ? i : 0);
}
