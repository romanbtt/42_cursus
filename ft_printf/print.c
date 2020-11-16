/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romanbtt <marvin@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 10:02:13 by romanbtt          #+#    #+#             */
/*   Updated: 2020/11/16 10:02:14 by romanbtt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void padding(int width, int lenght, t_flags *x)
{
	while (width > lenght)
	{
		if (x->zero)
		{
			ft_putchar_fd('0', 1);
			x->count++;
		}	
		else
		{
			ft_putchar_fd(' ', 1);
			x->count++;
		}	
		width--;
	}
}

void print(char *str, int size, t_flags *x)
{
	int i;

	i = 0;
	while (str[i] && i < size)
	{
		ft_putchar_fd(str[i++], 1);
		x->count++;
	}	
}