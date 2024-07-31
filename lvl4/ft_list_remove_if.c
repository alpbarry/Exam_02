#include <stdlib.h>

void	ft_list_remove(t_list **begin, void *data_ref, int (*cmp)())
{
	t_list	*cur;

	cur = *begin;
	if (cmp(cur->data, data_res) == 0)
	{
		*begin = cur->next;
		free(cur);
		ft_list_remove(begin, data_re, cmp);
	}
	else
	{
		cur = *begin;
		ft_list_remove(&cur->next, data_ref, cmp);
	}
}
