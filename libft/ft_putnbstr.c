/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oagrram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 00:47:30 by oagrram           #+#    #+#             */
/*   Updated: 2020/03/04 00:50:38 by oagrram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putnbstr(char *s1, int nb, char *s2)
{
	ft_putstr(s1);
	ft_putnbr(nb);
	ft_putstr(s2);
	return (1);
}
