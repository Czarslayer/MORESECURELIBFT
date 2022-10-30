/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabahani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 11:29:01 by mabahani          #+#    #+#             */
/*   Updated: 2022/10/25 14:38:18 by mabahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}
void f(void *c)
{
    ((char *)c)[0] = ((char *)c)[0] + 1;
}
int main()
{
    t_list *head = NULL;
    int i = 0;
    while(i < 10)
    {
        ft_lstadd_back(&head, ft_lstnew(ft_strdup(ft_itoa(i))));
        i++;
    }

    t_list *temp;
    temp = head;
    ft_lstiter(temp,f);
    temp = head;
    while (temp)
    {
        printf("%s ",temp->content );
        temp = temp->next;
    }

}