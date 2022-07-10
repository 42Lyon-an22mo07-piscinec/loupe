/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main6.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macourio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 10:29:50 by macourio          #+#    #+#             */
/*   Updated: 2022/07/08 10:35:46 by macourio         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char vrai[] = "macourio le login vote pour moi stp **35$#%^^%^6666666456$#$^";
	char faux[] = "643556846s\4\5\7\0\0\0\0\0\0\0\0";
	char faux2[] = "\6\5fesgs5   e\\\\ rsgdrgh%%&*Dxgdfxdg dx";
	char vrai2[] = "";

	if (ft_str_is_printable(vrai) == 0)
		printf("faux 1!\n");
	if (ft_str_is_printable(faux) == 1)
		printf("faux 2!\n");
	if (ft_str_is_printable(faux2) == 1)
		printf("faux 3!\n");
	if (ft_str_is_printable(vrai2) == 0)
		printf("faux 4!\n");
	else
		printf("vrai !\n");
}
