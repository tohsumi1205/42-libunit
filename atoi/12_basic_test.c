/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   12_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dainoue <dainoue@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 09:35:47 by tohsumi           #+#    #+#             */
/*   Updated: 2021/05/14 22:51:52 by dainoue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	atoi_basic9(void)
{
	if (ft_atoi("aaaa  aa") == atoi("aaaa  aa"))
		return (0);
	else
		return (-1);
}
