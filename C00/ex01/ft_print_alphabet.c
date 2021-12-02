/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molmo-cu <molmo-cu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 20:09:41 by molmo-cu          #+#    #+#             */
/*   Updated: 2021/12/02 13:31:04 by molmo-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letra;
	char	Maxletra;
	{
		letra = 'a';
		Maxletra = 'z';
		while (letra <= Maxletra)
		{
			write(1, &letra, 1);
			letra++;
		}
	}
}

/*int main(void)
	{
	ft_print_alphabet();
	}     */