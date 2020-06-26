/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmulaudz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 08:42:04 by rmulaudz          #+#    #+#             */
/*   Updated: 2020/06/26 10:31:37 by rmulaudz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int ft_putchar(char c)
{
    write(1, &c, 1);
    return 0;
}

void sastantua(int size)
{
    int height;
    int col;
    size = (size*2) + 1;
    int star;
	int f_slash;
	int b_slash;

    for(height = 1; height <= size; height++)
    {
        for(col = 1; col <= (size-height); col++)
        {
		   ft_putchar(' ');
        }
        f_slash = (2*height) - 3;
		b_slash = (2*height) + 3;
        for(star = 1; star <= ((2*height)-1); star++)
        {

	    	/*if(star == f_slash)
			{
				ft_putchar('/');
			}
			else if(star == b_slash)
			{
				ft_putchar('\\');
			}*/

		    ft_putchar('*');
        }
 
		ft_putchar('\n');
    }


}
int main()
{
    sastantua(2);

    return 0;
}

