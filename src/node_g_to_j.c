#include "banner.h"

static t_font_dict	*node_g_(char letter)
{
	t_font_dict	*node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	if (letter != 'G')
		return (NULL);
	node->ch = letter;
	node->lines = malloc(sizeof(*node->lines) * 6);
	if (!nodes->lines)
		return (free(node), NULL);
	node->lines[0] = ft_strdup(" ██████╗ ");
	node->lines[1] = ft_strdup("██╔════╝ ");
	node->lines[2] = ft_strdup("██║  ███╗");
	node->lines[3] = ft_strdup("██║   ██║");
	node->lines[4] = ft_strdup("╚██████╔╝");
	node->lines[5] = ft_strdup(" ╚═════╝ ");
	node->next = NULL;
	return (node);
}

static t_font_dict	*node_h_(char letter)
{
	t_font_dict	*node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	if (letter != 'H')
		return (NULL);
	node->ch = letter;
	node->lines = malloc(sizeof(*node->lines) * 6);
	if (!nodes->lines)
		return (free(node), NULL);
	node->lines[0] = ft_strdup("██╗  ██╗");
	node->lines[1] = ft_strdup("██║  ██║");
	node->lines[2] = ft_strdup("███████║");
	node->lines[3] = ft_strdup("██╔══██║");
	node->lines[4] = ft_strdup("██║  ██║");
	node->lines[5] = ft_strdup("╚═╝  ╚═╝");
	node->next = NULL;
	return (node);
}

static t_font_dict	*node_i_(char letter)
{
	t_font_dict	*node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	if (letter != 'I')
		return (NULL);
	node->ch = letter;
	node->lines = malloc(sizeof(*node->lines) * 6);
	if (!nodes->lines)
		return (free(node), NULL);
	node->lines[0] = ft_strdup("██╗");
	node->lines[1] = ft_strdup("██║");
	node->lines[2] = ft_strdup("██║");
	node->lines[3] = ft_strdup("██║");
	node->lines[4] = ft_strdup("██║");
	node->lines[5] = ft_strdup("╚═╝");
	node->next = NULL;
	return (node);
}

static t_font_dict	*node_j_(char letter)
{
	t_font_dict	*node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	if (letter != 'J')
		return (NULL);
	node->ch = letter;
	node->lines = malloc(sizeof(*node->lines) * 6);
	if (!nodes->lines)
		return (free(node), NULL);
	node->lines[0] = ft_strdup("     ██╗");
	node->lines[1] = ft_strdup("     ██║");
	node->lines[2] = ft_strdup("     ██║");
	node->lines[3] = ft_strdup("██   ██║");
	node->lines[4] = ft_strdup("╚█████╔╝");
	node->lines[5] = ft_strdup(" ╚════╝ ");
	node->next = NULL;
	return (node);
}

t_font_dict	*node_g_to_j(char letter)
{
	if (letter == 'G')
		return (node_g_(letter));
	else if (letter == 'H')
		return (node_h_(letter));
	else if (letter == 'I')
		return (node_i_(letter));
	else if (letter == 'J')
		return (node_j_(letter));
	return (NULL);
}