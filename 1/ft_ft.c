/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbennard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 15:39:46 by hbennard          #+#    #+#             */
/*   Updated: 2018/11/01 15:42:17 by hbennard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_ft(int *nbr)
{
	int value;
	value = 42;
	nbr = &value;
	return (*nbr);
}
int		main()
{
	int nbr;
	int value;
	
	nbr = 15;
	value = 42;
	printf("%d", ft_ft(&nbr));
	return (0);
}
