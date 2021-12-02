/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molmo-cu <molmo-cu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 21:12:37 by molmo-cu          #+#    #+#             */
/*   Updated: 2021/12/01 21:35:44 by molmo-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void)
	{
		char letra;
		letra='z';
		int Minletra;
		Minletra = 'a';
	
			 while (letra >= Minletra)
				{
					 write(1, &letra, 1);
					 letra--;
				 }
	}
int main(void)
	{
	ft_print_reverse_alphabet();
	}   