/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main12.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macourio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:25:18 by macourio          #+#    #+#             */
/*   Updated: 2022/07/09 21:06:01 by macourio         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	*ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char test[] = "bojour les gens oui oui login macourio mdr";
	ft_print_memory(test, 100);
}
