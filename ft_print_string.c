/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emeinert <emeinert@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 14:40:02 by emeinert          #+#    #+#             */
/*   Updated: 2022/12/06 15:49:26 by emeinert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(char *string)
{
	int	i;

	i = 0;
	if (string == NULL)
	{
		write(1, "(null)", 6);
		i = 6;
		return (i);
	}
	while (string[i] != '\0')
	{
		write(1, &string[i], 1);
		i++;
	}
	return (i);
}
