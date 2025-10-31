#include "banner.h"

void	free_font_dict(t_font_dict *dict)
{
	t_font_dict	*tmp;

	while (dict)
	{
		ft_free_matrix(dict->lines);
		tmp = dict->next;
		free(dict);
		dict = tmp;
	}
}

t_font_dict	*new_font_node(char c, char **lines)
{
	t_font_dict	*node;
	int			line;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	node->ch = c;
	line = 0;
	while (line < 6)
	{
		node->lines[line] = lines[line];
		line++;
	}
	node->next = NULL;
	return (node);
}