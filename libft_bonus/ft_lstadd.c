#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	new->next = *alst; //point new struct to current first position
	*alst = new; // points first_ptr to new struct (Not sure why it is *alst tho)
}

//new->next shorthand for (*new).next
//head node is always **, others are *, since for head node you are always going thru intermediaty ptr that points to the head node.
