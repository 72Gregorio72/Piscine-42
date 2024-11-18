#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list *create(int data)
{
	t_list *new_node = (t_list *)malloc(sizeof(t_list));
	if(!new_node)
		return NULL;
	new_node->data = data;
	new_node->next = NULL;

	return new_node;
}

void add_elem(int data, t_list **head)
{
    t_list *new_node = (t_list *)malloc(sizeof(t_list));
    if (!new_node)
        return ;

    new_node->data = data;
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        t_list *current = *head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = new_node;
    }
}

void che_cazzo_me_ne_frega_del_nome(int data, t_list **head)
{
	t_list *new_node = (t_list *)malloc(sizeof(t_list));
	if(!new_node)
		return ;
	new_node->data = data;
	new_node->next = NULL;

	new_node->next = *head;

	*head = new_node;
}

void add_sorted(int data, t_list **head)
{
	t_list *new_node = create(data);

	if(*head == NULL || (*head)->data >= data)
	{
		new_node->next = *head;
        *head = new_node;
	}
	else
	{
		t_list *temp = *head;
		while(temp->next != NULL && temp->next->data < data)
		{
			temp = temp->next;
		}
		new_node->next = temp->next;
		temp->next = new_node;
	}
}

void print_list(t_list *list)
{
    while (list)
    {
        printf("%d, ", list->data);
        list = list->next;
    }
    printf("\n");
}

int main()
{
    t_list *head = NULL;
    int data = 42;
    int data1 = 65;

    add_sorted(5, &head);
	add_sorted(3, &head);
	add_sorted(9, &head);
	add_sorted(1, &head);
    print_list(head);

    return 0;
}

