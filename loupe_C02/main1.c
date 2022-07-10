/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macourio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 07:18:51 by macourio          #+#    #+#             */
/*   Updated: 2022/07/08 07:50:37 by macourio         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
	char ft_dest[] = "Bonjour";
	char ft_src [] = "non";
	char dest[] = "Bonjour";
	char src[] = "non";
	int i = 0;

	ft_strncpy(ft_dest, ft_src, 2);
	strncpy(dest, src, 2);
	while (i < 8)
	{
		if (!(dest[i] == ft_dest[i]))
		{
			printf("Pas bon !!\n");
			return (-1);
		}
		i++;
	}
	ft_strncpy(ft_dest, ft_src, 6);
	strncpy(dest, src, 6);
	i = 0;
	while (i < 8)
	{
		if (!(dest[i] == ft_dest[i]))
		{
			printf("Pas bon !!\n");
			return (-1);
		}
		i++;
	}
	printf("C'est bon !");
}
