/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_s_to_v.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebris-c <kebris-c@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:16:32 by kebris-c          #+#    #+#             */
/*   Updated: 2025/11/03 12:16:33 by kebris-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "banner.h"

static t_font_dict	*node_s_(char letter)
{
	t_font_dict	*node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	if (letter != 'S')
		return (NULL);
	node->ch = letter;
	node->lines = malloc(sizeof(*node->lines) * 6);
	if (!node->lines)
		return (free(node), NULL);
	node->lines[0] = ft_strdup("▄█████▄╗");
	node->lines[1] = ft_strdup("██╔════╝");
	node->lines[2] = ft_strdup("▀█████▄╗");
	node->lines[3] = ft_strdup(" ╚═══██║");
	node->lines[4] = ft_strdup("▀█████▀╝");
	node->lines[5] = ft_strdup(" ╚═══╝  ");
	node->next = NULL;
	return (node);
}

static t_font_dict	*node_t_(char letter)
{
	t_font_dict	*node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	if (letter != 'T')
		return (NULL);
	node->ch = letter;
	node->lines = malloc(sizeof(*node->lines) * 6);
	if (!node->lines)
		return (free(node), NULL);
	node->lines[0] = ft_strdup("████████╗");
	node->lines[1] = ft_strdup("╚══██╔══╝");
	node->lines[2] = ft_strdup("   ██║   ");
	node->lines[3] = ft_strdup("   ██║   ");
	node->lines[4] = ft_strdup("   ██║   ");
	node->lines[5] = ft_strdup("   ╚═╝   ");
	node->next = NULL;
	return (node);
}

static t_font_dict	*node_u_(char letter)
{
	t_font_dict	*node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	if (letter != 'U')
		return (NULL);
	node->ch = letter;
	node->lines = malloc(sizeof(*node->lines) * 6);
	if (!node->lines)
		return (free(node), NULL);
	node->lines[0] = ft_strdup("██╗   ██╗");
	node->lines[1] = ft_strdup("██║   ██║");
	node->lines[2] = ft_strdup("██║   ██║");
	node->lines[3] = ft_strdup("██║   ██║");
	node->lines[4] = ft_strdup("╚██████╔╝");
	node->lines[5] = ft_strdup(" ╚═════╝ ");
	node->next = NULL;
	return (node);
}

static t_font_dict	*node_v_(char letter)
{
	t_font_dict	*node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	if (letter != 'V')
		return (NULL);
	node->ch = letter;
	node->lines = malloc(sizeof(*node->lines) * 6);
	if (!node->lines)
		return (free(node), NULL);
	node->lines[0] = ft_strdup("██╗   ██╗");
	node->lines[1] = ft_strdup("██║   ██║");
	node->lines[2] = ft_strdup("██║   ██║");
	node->lines[3] = ft_strdup("╚██╗ ██╔╝");
	node->lines[4] = ft_strdup(" ╚████╔╝ ");
	node->lines[5] = ft_strdup("  ╚═══╝  ");
	node->next = NULL;
	return (node);
}

t_font_dict	*node_s_to_v(char letter)
{
	if (letter == 'S')
		return (node_s_(letter));
	else if (letter == 'T')
		return (node_t_(letter));
	else if (letter == 'U')
		return (node_u_(letter));
	else if (letter == 'V')
		return (node_v_(letter));
	return (NULL);
}
