/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:33:38 by agianico          #+#    #+#             */
/*   Updated: 2019/11/12 12:25:28 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (c > '9' && c < 'A')
		return (0);
	if ((c >= '0' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
