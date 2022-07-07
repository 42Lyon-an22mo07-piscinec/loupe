/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main7.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macourio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 18:07:02 by macourio          #+#    #+#             */
/*   Updated: 2022/07/07 18:13:10 by macourio         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int main(void)
{
	int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i = 0;
	while (i < 9)
	{
		printf("%d\n", tab[i++]);
	}
	ft_rev_int_tab(tab, 9);
	i = 0;
	while (i < 9)
	{
		printf("%d\n", tab[i++]);
	}
}
