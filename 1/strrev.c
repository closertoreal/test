/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbennard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 15:18:13 by hbennard          #+#    #+#             */
/*   Updated: 2018/11/06 15:19:50 by hbennard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int        ft_strlen(char *str)
{
	    int        i;

		    i = 0;
			    while (str[i])
					        i++;
				    return (i);
}

char    *ft_strrev(char *str)
{
	    int        i;
		    int        length;
			    char    buff;

				    i = 0;
					    length = ft_strlen(str);
						    while (length - 1 > i)
								    {
										        buff = str[i];
												        str[i] = str[length - 1];
														        str[length - 1] = buff;
																        length--;
																		        i++;
																				    }
							    return (str);
}

int main() {
	char *str;
	  str = "asdf";
	    ft_strrev(str);
		  return 0;
}
