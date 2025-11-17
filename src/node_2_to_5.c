/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_2_to_5.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebris-c <kebris-c@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:16:10 by kebris-c          #+#    #+#             */
/*   Updated: 2025/11/03 12:16:11 by kebris-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "banner.h"

static t_font_dict	*node_2_(char digit)
{
	t_font_dict	*node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	if (digit != '2')
		return (NULL);
	node->ch = digit;
	node->lines = malloc(sizeof(*node->lines) * 6);
	if (!node->lines)
		return (free(node), NULL);
	node->lines[0] = ft_strdup("██████╗ ");
	node->lines[1] = ft_strdup("╚════██╗");
	node->lines[2] = ft_strdup(" █████╔╝");
	node->lines[3] = ft_strdup("██╔═══╝ ");
	node->lines[4] = ft_strdup("███████╗");
	node->lines[5] = ft_strdup("╚══════╝");
	node->next = NULL;
	return (node);
}

static t_font_dict	*node_3_(char digit)
{
	t_font_dict	*node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	if (digit != '3')
		return (NULL);
	node->ch = digit;
	node->lines = malloc(sizeof(*node->lines) * 6);
	if (!node->lines)
		return (free(node), NULL);
	node->lines[0] = ft_strdup("██████╗ ");
	node->lines[1] = ft_strdup("╚════██╗");
	node->lines[2] = ft_strdup(" █████╔╝");
	node->lines[3] = ft_strdup(" ╚═══██╗");
	node->lines[4] = ft_strdup("██████╔╝");
	node->lines[5] = ft_strdup("╚═════╝ ");
	node->next = NULL;
	return (node);
}

static t_font_dict	*node_4_(char digit)
{
	t_font_dict	*node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	if (digit != '4')
		return (NULL);
	node->ch = digit;
	node->lines = malloc(sizeof(*node->lines) * 6);
	if (!node->lines)
		return (free(node), NULL);
	node->lines[0] = ft_strdup("██╗  ██╗");
	node->lines[1] = ft_strdup("██║  ██║");
	node->lines[2] = ft_strdup("███████║");
	node->lines[3] = ft_strdup("╚════██║");
	node->lines[4] = ft_strdup("     ██║");
	node->lines[5] = ft_strdup("     ╚═╝");
	node->next = NULL;
	return (node);
}

static t_font_dict	*node_5_(char digit)
{
	t_font_dict	*node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	if (digit != '5')
		return (NULL);
	node->ch = digit;
	node->lines = malloc(sizeof(*node->lines) * 6);
	if (!node->lines)
		return (free(node), NULL);
	node->lines[0] = ft_strdup("███████╗");
	node->lines[1] = ft_strdup("██╔════╝");
	node->lines[2] = ft_strdup("███████╗");
	node->lines[3] = ft_strdup("╚════██║");
	node->lines[4] = ft_strdup("███████║");
	node->lines[5] = ft_strdup("╚══════╝");
	node->next = NULL;
	return (node);
}

t_font_dict	*node_2_to_5(char digit)
{
	if (digit == '2')
		return (node_2_(digit));
	else if (digit == '3')
		return (node_3_(digit));
	else if (digit == '4')
		return (node_4_(digit));
	else if (digit == '5')
		return (node_5_(digit));
	return (NULL);
}
