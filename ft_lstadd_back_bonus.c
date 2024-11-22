/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 18:05:33 by zkharbac          #+#    #+#             */
/*   Updated: 2024/11/16 11:18:36 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	last = ft_lstlast(*lst);
	if (!last)
	{
		*lst = new;
		return ;
	}
	last->next = new;
}


    
int main()
{
    // Create a few nodes
    t_list *node1 = ft_lstnew("Hello");
    t_list *node2 = ft_lstnew("World!");
    t_list *node3 = ft_lstnew("42");

    // Start a list with one node
    t_list *lst = node1;

    // Add nodes to the end of the list
    ft_lstadd_back(&lst, node2);
    ft_lstadd_back(&lst, node3);

    // Print the content of the first node
    t_list *temp = lst;  // Start from the head of the list
    printf("%s\n", (char *)temp->next->content);  // Print the content of the first node
    
    // Clean up memory
    free(node1);
    free(node2);
    free(node3);

    return 0;
}