/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macourio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 10:24:50 by macourio          #+#    #+#             */
/*   Updated: 2022/07/08 10:25:50 by macourio         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char vrai[] = "MACOURIOLELOGINVOTEPOURMOISTP";
	char faux[] = "643556846segdfhGDRHAHRA4v64 t6h4 f6h 4f646";
	char faux2[] = "RTAEWTE5   e\\\\ rsgdrgh%%&*Dxgdfxdg dx";

	if (ft_str_is_uppercase(vrai) == 0)
		printf("faux 1!\n");
	if (ft_str_is_uppercase(faux) == 1)
		printf("faux 2!\n");
	if (ft_str_is_uppercase(faux2) == 1)
		printf("faux 3!\n");
	else
		printf("vrai !\n");
}
