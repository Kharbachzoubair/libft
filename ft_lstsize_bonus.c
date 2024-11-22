/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:41:44 by zkharbac          #+#    #+#             */
/*   Updated: 2024/11/16 11:15:57 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
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

//     // Count the number of nodes in the list
//     int size = ft_lstsize(node1);
//     printf("Size of the list: %d\n", size);

//     // Print the list contents
    

//     // Clean up memory
//     free(node1);
//     free(node2);
//     free(node3);

//     return 0;
// }