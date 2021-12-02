/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molmo-cu <molmo-cu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 21:32:26 by molmo-cu          #+#    #+#             */
/*   Updated: 2021/12/01 22:13:07 by molmo-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_print_numbers(void)
{
    char num;
    num='0';
    while(num<='9')
    {
        write(1, &num, sizeof(num));
		num++;

    }
}
int main(void)
	{
	ft_print_numbers();
	} 