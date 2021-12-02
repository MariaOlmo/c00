/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molmo-cu <molmo-cu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 00:06:31 by molmo-cu          #+#    #+#             */
/*   Updated: 2021/12/02 00:25:17 by molmo-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n)
{
    char positivo;
    char negativo;
    positivo = 'P';
    negativo = 'N';
 if (n<0){
   write(1, &negativo, 1);
 }
else{
    write(1, &positivo, 1);
}
 


}
int main(void)
	{
        char num;
        num='2';
	ft_is_negative(num);
	} 
