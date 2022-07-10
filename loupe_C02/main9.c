/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main9.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macourio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:16:48 by macourio          #+#    #+#             */
/*   Updated: 2022/07/08 12:40:13 by macourio         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char test[] = "		 	  		salut, comment tu vas ? 52mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(test));
}
