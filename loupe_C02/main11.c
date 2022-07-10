/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main11.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macourio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 13:39:42 by macourio          #+#    #+#             */
/*   Updated: 2022/07/09 14:41:32 by macourio         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char str[] = "salut \n \t \t\f Comment \2\3\4 tu vas ?";
	ft_putstr_non_printable(str);
}
