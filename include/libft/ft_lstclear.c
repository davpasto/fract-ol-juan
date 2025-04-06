/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpasto </var/spool/mail/davpasto>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:54:05 by davpasto          #+#    #+#             */
/*   Updated: 2023/11/13 04:15:31 by davpasto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list  *tmp;

    if (!lst || !*lst || !del)
        return ;

    while (*lst)
    {
        tmp = *lst;
        *lst = (*lst)->next;

        if (tmp->content)
        {
            del(tmp->content);
            free(tmp);
        }
    }
}
