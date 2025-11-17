/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebris-c <kebris-c@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:16:07 by kebris-c          #+#    #+#             */
/*   Updated: 2025/11/03 15:11:18 by kebris-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "banner.h"

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (EXIT_FAILURE);
	print_banner(argv[1]);
	return (EXIT_SUCCESS);
}
