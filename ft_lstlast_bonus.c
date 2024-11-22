/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:02:22 by zkharbac          #+#    #+#             */
/*   Updated: 2024/11/16 11:15:49 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// int main()
// {
//     // Create a few nodes
//     t_list *node1 = ft_lstnew("Hello");
//     t_list *node2 = ft_lstnew("World!");
//     t_list *node3 = ft_lstnew("42");

//     // Link the nodes together
//     node1->next = node2;
//     node2->next = node3;

//     // Get the last node in the list
//     t_list *last_node = ft_lstlast(node1);
//     printf("Last node content: %s\n", (char *)last_node->content);

//     // Print the list contents
    

//     // Clean up memory
//     free(node1);
//     free(node2);
//     free(node3);

//     return 0;
// }