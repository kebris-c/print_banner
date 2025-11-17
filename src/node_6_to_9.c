/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_6_to_9.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebris-c <kebris-c@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:16:14 by kebris-c          #+#    #+#             */
/*   Updated: 2025/11/03 12:16:14 by kebris-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "banner.h"

static t_font_dict	*node_6_(char digit)
{
	t_font_dict	*node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	if (digit != '6')
		return (NULL);
	node->ch = digit;
	node->lines = malloc(sizeof(*node->lines) * 6);
	if (!node->lines)
		return (free(node), NULL);
	node->lines[0] = ft_strdup(" ██████╗");
	node->lines[1] = ft_strdup("██╔════╝");
	node->lines[2] = ft_strdup("███████╗");
	node->lines[3] = ft_strdup("██╔══██║");
	node->lines[4] = ft_strdup("███████║");
	node->lines[5] = ft_strdup("╚══════╝");
	node->next = NULL;
	return (node);
}

static t_font_dict	*node_7_(char digit)
{
	t_font_dict	*node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	if (digit != '7')
		return (NULL);
	node->ch = digit;
	node->lines = malloc(sizeof(*node->lines) * 6);
	if (!node->lines)
		return (free(node), NULL);
	node->lines[0] = ft_strdup("███████╗");
	node->lines[1] = ft_strdup("╚══███╔╝");
	node->lines[2] = ft_strdup("  ███╔╝ ");
	node->lines[3] = ft_strdup(" ███╔╝  ");
	node->lines[4] = ft_strdup("███╔╝   ");
	node->lines[5] = ft_strdup("╚══╝    ");
	node->next = NULL;
	return (node);
}

static t_font_dict	*node_8_(char digit)
{
	t_font_dict	*node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	if (digit != '8')
		return (NULL);
	node->ch = digit;
	node->lines = malloc(sizeof(*node->lines) * 6);
	if (!node->lines)
		return (free(node), NULL);
	node->lines[0] = ft_strdup(" █████╗ ");
	node->lines[1] = ft_strdup("██╔══██╗");
	node->lines[2] = ft_strdup("╚█████╔╝");
	node->lines[3] = ft_strdup("██╔══██╗");
	node->lines[4] = ft_strdup("╚█████╔╝");
	node->lines[5] = ft_strdup(" ╚════╝ ");
	node->next = NULL;
	return (node);
}

static t_font_dict	*node_9_(char digit)
{
	t_font_dict	*node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	if (digit != '9')
		return (NULL);
	node->ch = digit;
	node->lines = malloc(sizeof(*node->lines) * 6);
	if (!node->lines)
		return (free(node), NULL);
	node->lines[0] = ft_strdup(" █████╗ ");
	node->lines[1] = ft_strdup("██╔══██╗");
	node->lines[2] = ft_strdup("╚██████║");
	node->lines[3] = ft_strdup(" ╚═══██║");
	node->lines[4] = ft_strdup(" █████╔╝");
	node->lines[5] = ft_strdup(" ╚════╝ ");
	node->next = NULL;
	return (node);
}

t_font_dict	*node_6_to_9(char digit)
{
	if (digit == '6')
		return (node_6_(digit));
	else if (digit == '7')
		return (node_7_(digit));
	else if (digit == '8')
		return (node_8_(digit));
	else if (digit == '9')
		return (node_9_(digit));
	return (NULL);
}
