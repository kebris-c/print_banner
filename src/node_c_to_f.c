/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_c_to_f.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebris-c <kebris-c@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:16:17 by kebris-c          #+#    #+#             */
/*   Updated: 2025/11/03 12:16:18 by kebris-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "banner.h"

static t_font_dict	*node_c_(char letter)
{
	t_font_dict	*node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	if (letter != 'C')
		return (NULL);
	node->ch = letter;
	node->lines = malloc(sizeof(*node->lines) * 6);
	if (!node->lines)
		return (free(node), NULL);
	node->lines[0] = ft_strdup(" ██████╗");
	node->lines[1] = ft_strdup("██╔════╝");
	node->lines[2] = ft_strdup("██║     ");
	node->lines[3] = ft_strdup("██║     ");
	node->lines[4] = ft_strdup("╚██████╗");
	node->lines[5] = ft_strdup(" ╚═════╝");
	node->next = NULL;
	return (node);
}

static t_font_dict	*node_d_(char letter)
{
	t_font_dict	*node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	if (letter != 'D')
		return (NULL);
	node->ch = letter;
	node->lines = malloc(sizeof(*node->lines) * 6);
	if (!node->lines)
		return (free(node), NULL);
	node->lines[0] = ft_strdup("██████╗ ");
	node->lines[1] = ft_strdup("██╔══██╗");
	node->lines[2] = ft_strdup("██║  ██║");
	node->lines[3] = ft_strdup("██║  ██║");
	node->lines[4] = ft_strdup("██████╔╝");
	node->lines[5] = ft_strdup("╚═════╝ ");
	node->next = NULL;
	return (node);
}

static t_font_dict	*node_e_(char letter)
{
	t_font_dict	*node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	if (letter != 'E')
		return (NULL);
	node->ch = letter;
	node->lines = malloc(sizeof(*node->lines) * 6);
	if (!node->lines)
		return (free(node), NULL);
	node->lines[0] = ft_strdup("███████╗");
	node->lines[1] = ft_strdup("██╔════╝");
	node->lines[2] = ft_strdup("█████╗  ");
	node->lines[3] = ft_strdup("██╔══╝  ");
	node->lines[4] = ft_strdup("███████╗");
	node->lines[5] = ft_strdup("╚══════╝");
	node->next = NULL;
	return (node);
}

static t_font_dict	*node_f_(char letter)
{
	t_font_dict	*node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	if (letter != 'F')
		return (NULL);
	node->ch = letter;
	node->lines = malloc(sizeof(*node->lines) * 6);
	if (!node->lines)
		return (free(node), NULL);
	node->lines[0] = ft_strdup("███████╗");
	node->lines[1] = ft_strdup("██╔════╝");
	node->lines[2] = ft_strdup("█████╗  ");
	node->lines[3] = ft_strdup("██╔══╝  ");
	node->lines[4] = ft_strdup("██║     ");
	node->lines[5] = ft_strdup("╚═╝     ");
	node->next = NULL;
	return (node);
}

t_font_dict	*node_c_to_f(char letter)
{
	if (letter == 'C')
		return (node_c_(letter));
	else if (letter == 'D')
		return (node_d_(letter));
	else if (letter == 'E')
		return (node_e_(letter));
	else if (letter == 'F')
		return (node_f_(letter));
	return (NULL);
}
