/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_owl_.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebris-c <kebris-c@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:48:05 by kebris-c          #+#    #+#             */
/*   Updated: 2025/11/03 17:07:45 by kebris-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "banner.h"

t_font_dict	*node_owl_(void)
{
	t_font_dict	*node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	node->lines = malloc(sizeof(*node->lines) * 6);
	if (!node->lines)
		return (free(node), NULL);
	node->lines[0] = ft_strdup(" ,_, ");
	node->lines[1] = ft_strdup("(0v0)");
	node->lines[2] = ft_strdup("(   )");
	node->lines[3] = ft_strdup(" \"\"\" ");
	node->lines[4] = ft_strdup("/|_|\\");
	node->lines[5] = ft_strdup(" \" \" ");
	node->next = NULL;
	return (node);
}
