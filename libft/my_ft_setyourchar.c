/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_ft_setyourchar.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmizin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 13:15:45 by nmizin            #+#    #+#             */
/*   Updated: 2017/11/24 13:24:13 by nmizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	my_ft_setyourchar(char *s, int c)
{
	while (*s)
		*s++ = (unsigned char)c;
}
