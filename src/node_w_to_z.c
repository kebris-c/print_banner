#include "banner.h"

static t_font_dict	*node_w_(char letter)
{
	t_font_dict	*node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	if (letter != 'W')
		return (NULL);
	node->ch = letter;
	node->lines = malloc(sizeof(*node->lines) * 6);
	if (!nodes->lines)
		return (free(node), NULL);
	node->lines[0] = ft_strdup("██╗    ██╗");
	node->lines[1] = ft_strdup("██║    ██║");
	node->lines[2] = ft_strdup("██║ █╗ ██║");
	node->lines[3] = ft_strdup("██║███╗██║");
	node->lines[4] = ft_strdup("╚███╔███╔╝");
	node->lines[5] = ft_strdup(" ╚══╝╚══╝ ");
	node->next = NULL;
	return (node);
}

static t_font_dict	*node_x_(char letter)
{
	t_font_dict	*node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	if (letter != 'X')
		return (NULL);
	node->ch = letter;
	node->lines = malloc(sizeof(*node->lines) * 6);
	if (!nodes->lines)
		return (free(node), NULL);
	node->lines[0] = ft_strdup("██╗  ██╗");
	node->lines[1] = ft_strdup("╚██╗██╔╝");
	node->lines[2] = ft_strdup(" ╚███╔╝ ");
	node->lines[3] = ft_strdup(" ██╔██╗ ");
	node->lines[4] = ft_strdup("██╔╝ ██╗");
	node->lines[5] = ft_strdup("╚═╝  ╚═╝");
	node->next = NULL;
	return (node);
}

static t_font_dict	*node_y_(char letter)
{
	t_font_dict	*node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	if (letter != 'Y')
		return (NULL);
	node->ch = letter;
	node->lines = malloc(sizeof(*node->lines) * 6);
	if (!nodes->lines)
		return (free(node), NULL);
	node->lines[0] = ft_strdup("██╗   ██╗");
	node->lines[1] = ft_strdup("╚██╗ ██╔╝");
	node->lines[2] = ft_strdup(" ╚████╔╝ ");
	node->lines[3] = ft_strdup("  ╚██╔╝  ");
	node->lines[4] = ft_strdup("   ██║   ");
	node->lines[5] = ft_strdup("   ╚═╝   ");
	node->next = NULL;
	return (node);
}

static t_font_dict	*node_z_(char letter)
{
	t_font_dict	*node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	if (letter != 'Z')
		return (NULL);
	node->ch = letter;
	node->lines = malloc(sizeof(*node->lines) * 6);
	if (!nodes->lines)
		return (free(node), NULL);
	node->lines[0] = ft_strdup("███████╗");
	node->lines[1] = ft_strdup("╚══███╔╝");
	node->lines[2] = ft_strdup("  ███╔╝ ");
	node->lines[3] = ft_strdup(" ███╔╝  ");
	node->lines[4] = ft_strdup("███████╗");
	node->lines[5] = ft_strdup("╚══════╝");
	node->next = NULL;
	return (node);
}

t_font_dict	*node_w_to_z(char letter)
{
	if (letter == 'W')
		return (node_w_(letter));
	else if (letter == 'X')
		return (node_x_(letter));
	else if (letter == 'Y')
		return (node_y_(letter));
	else if (letter == 'Z')
		return (node_z_(letter));
	return (NULL);
}