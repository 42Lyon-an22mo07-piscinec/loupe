/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macourio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 10:18:35 by macourio          #+#    #+#             */
/*   Updated: 2022/07/08 10:21:12 by macourio         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char vrai[] = "macourioleloginvotepourmoistp";
	char faux[] = "643556846segdfhgfn64v64 t6h4 f6h 4f646";
	char faux2[] = "fesgs5   e\\\\ rsgdrgh%%&*Dxgdfxdg dx";

	if (ft_str_is_lowercase(vrai) == 0)
		printf("faux 1!\n");
	if (ft_str_is_lowercase(faux) == 1)
		printf("faux 2!\n");
	if (ft_str_is_lowercase(faux2) == 1)
		printf("faux 3!\n");
	else
		printf("vrai !\n");
}
