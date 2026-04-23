/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_args.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineguill <ineguill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 18:55:25 by ineguill          #+#    #+#             */
/*   Updated: 2026/04/17 19:21:19 by ineguill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_digits(char **argv)
{
	int p;
	int	i;
	
	p = 0;
	i = 0;
	while (argv[p])
	{
		if (argv[p][i] == '-' || argv[p][i] == '+')
		{
			if (!argv[p][i + 1])
				return	0;	
			i++;
		}
		while (argv[p][i])
		{
			if (!ft_isdigit(argv))
				return	0;	
			i++;
		}
		p++;
	}
	return	1;
}
static int	check_dup(char **argv)
{
	
}

static int	check_range(char **argv)
{

}

void	validate(char **argv)
{
	
}