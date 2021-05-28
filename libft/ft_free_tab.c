/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oagrram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 00:52:03 by oagrram           #+#    #+#             */
/*   Updated: 2020/03/04 03:29:52 by oagrram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_free_tab(char **tabb)
{
	int		i;

	i = 0;
	while (tabb[i])
	{
		ft_strdel(&tabb[i]);
		i++;
	}
	free(tabb);
}
