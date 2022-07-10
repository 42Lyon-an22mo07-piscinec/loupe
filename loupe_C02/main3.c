/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macourio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 08:16:14 by macourio          #+#    #+#             */
/*   Updated: 2022/07/08 10:03:13 by macourio         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char vrai[] = "68412200023461320835410";
	char faux[] = "643556846segdfhgfn64v64 t6h4 f6h 4f646";
	char faux2[] = "fesgs5   e\\\\ rsgdrgh%%&*Dxgdfxdg dx";
	
	if (ft_str_is_numeric(vrai) == 0)
		printf("faux !\n");
	if (ft_str_is_numeric(faux) == 1)
		printf("faux !\n");
	if (ft_str_is_numeric(faux2) == 1)
		printf("faux !\n");
	else 
		printf("vrai !\n");
}
