/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic_test2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tohsumi <tohsumi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 09:35:47 by tohsumi           #+#    #+#             */
/*   Updated: 2021/05/14 21:13:47 by tohsumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	atoi_basic2(void)
{
	if (ft_atoi("     -5125") == atoi("     -5125"))
		return (0);
	else
		return (-1);
}
