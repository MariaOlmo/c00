/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molmo-cu <molmo-cu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 00:26:12 by molmo-cu          #+#    #+#             */
/*   Updated: 2021/12/02 01:25:35 by molmo-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb(void)
{
char num1;
char num2;
char num3;
char espacio;
char coma;
espacio=' ';
coma=',';

num1='0';

	while (num1<='7')
	{
 		num2= num1+ 1;
		while (num2<='8')
		{
	 		num3=num2+ 1;
	 		while(num3<='9')
	 		{
				write(1, &num1, 1);
				write(1, &num2, 1);
				write(1, &num3, 1);
				
				num3++;
				if (num1!=7 &&num2!=8&&num1!=8)
				{
					write(1, &espacio, 1);
				    write(1, &coma, 1);
				}

	 		}
	  		num2++;
		} 
		 num1++;
	}
}


int main(void)
	{
	ft_print_comb();
	} 
