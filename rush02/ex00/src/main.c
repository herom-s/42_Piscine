/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsilveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 14:44:05 by wsilveir          #+#    #+#             */
/*   Updated: 2025/05/04 21:52:36 by smolinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../inc/ft_print_error.h"
#include "../inc/ft_string.h"
#include "../inc/ft_treatment_nbr.h"
#include "../inc/ft_parse.h"
#include "../inc/ft_populate_dict.h"
#include <stdio.h>

int	validate_parse(char *arg1, char *arg2)
{
	char	*nbr;

	nbr = ft_validate_nbr(arg2);
	if (nbr != 0)
	{
		if (!arg1)
			ft_parse(ft_populate_dict("numbers.dict"), ft_prepare_nbr(nbr));
		else
			ft_parse(ft_populate_dict(arg1), ft_prepare_nbr(nbr));
	}
	else
	{
		ft_print_error();
		return (2);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 2 && argc != 3)
	{
		ft_print_error();
		return (1);
	}
	if (argc == 2)
		return (validate_parse(0, argv[1]));
	else
		return (validate_parse(argv[1], argv[2]));
	return (0);
}
