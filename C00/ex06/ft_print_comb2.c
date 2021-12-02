/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molmo-cu <molmo-cu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 01:38:01 by molmo-cu          #+#    #+#             */
/*   Updated: 2021/12/02 03:38:30 by molmo-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c){
    write(1, &c, 1);
}

void ft_print_comb2(void){
    char num0;
    char num01;
    char num1;
    char num2;
    num0='0';
    

    
    while (num0<='9')
    { 
        num01='0';
      while ((num0<='9')&&(num01<='8')){
          num1='0';
          while (num1<='9'){
        num2='0';
        while (num2<='9'){
            ft_putchar(num0);
            ft_putchar(num01);
            ft_putchar(' ');
            ft_putchar(num1);
            ft_putchar(num2);
            
            if(num0!='9'||num01!='8'||num1!='9'||num2!='9')
            {
                ft_putchar(',');
                ft_putchar(' ');
            }
            num2++;
        }
        num1++;
    }
    num01++;
    }
    num0++;
    }

    

}


int main(void)
{
    ft_print_comb2();
}