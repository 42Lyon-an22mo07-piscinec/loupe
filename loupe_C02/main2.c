/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macourio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 07:59:26 by macourio          #+#    #+#             */
/*   Updated: 2022/07/08 08:08:24 by macourio         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char vrai[] = "CetteChaIneFonctioNNeBIeN";
	char faux[] = "Celle ci non /*-@#$";
	char faux2[] = "  /*-//*/@$@%^$%&77\\";

	if (ft_str_is_alpha(vrai) == 0)
		printf("pas bon !\n");
	if (ft_str_is_alpha(faux) == 1)
		printf("pas bon !\n");
	if (ft_str_is_alpha(faux2) == 1)
		printf("pas bon !\n");
	printf("C'est bon !\n");
}
