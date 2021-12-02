/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molmo-cu <molmo-cu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 03:37:28 by molmo-cu          #+#    #+#             */
/*   Updated: 2021/12/02 12:11:13 by molmo-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c){
    write(1, &c, sizeof(c));
}

void ft_putnbr(int nb)
{

   if (nb<0)
   {
ft_putchar('-');
    nb*=-1;
   }

    if(nb<=9)
   {
       ft_putchar(nb+'0');
      
   }
 else 
      {
       ft_putnbr(nb/10);
      ft_putnbr(nb%10);
       

      }
   

}

/*int main(void)
{
    int num;
    num=-2147483647;
    ft_putnbr(num);
}*/

