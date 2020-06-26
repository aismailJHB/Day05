/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aismail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 11:48:05 by aismail           #+#    #+#             */
/*   Updated: 2020/06/26 11:52:29 by aismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strupcase(char *str){

	  char ch2;

      if(*str >= 'a' && *str <= 'z'){
            ch2 = ('A' + *str - 'a');
            return ch2;
      }
      else{
            ch2 = *str;
            return ch2;
      }
}

int main()
{
      char lower, upper;
 
      upper = lower_to_upper(&lower);
 
      return 0;
}
