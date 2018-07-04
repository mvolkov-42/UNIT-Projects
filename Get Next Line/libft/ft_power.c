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

int		ft_power(int nb, int power)
{
	if (power < 0)
		return (0);
	return ((power == 0) ? 1 : nb * ft_power(nb, power - 1));
}