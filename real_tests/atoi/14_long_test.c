/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   14_long_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainoue <dainoue@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 09:35:47 by tohsumi           #+#    #+#             */
/*   Updated: 2021/05/14 22:51:15 by dainoue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	atoi_long(void)
{
	if (ft_atoi("123456789123456789") == atoi("123456789123456789"))
		return (0);
	else
		return (-1);
}
