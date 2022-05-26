/*
** EPITECH PROJECT, 2022
** SegV
** File description:
** segv
*/

#include "04.h"

void my_add_node(linked_list_t **list, char *name)
{
    static int id = 0;
    linked_list_t *new = malloc(sizeof(*new));

    new->id = id++;
    new->name = name;
    new->next = *list;
    *list = new;
}

void my_rev_list(linked_list_t **current)
{
    linked_list_t *prev = NULL;
    linked_list_t *next = NULL;

    while (*current != NULL) {
        next = (*current)->next;
        (*current)->next = prev;
        prev = *current;
        *current = next;
    }
    *current = prev;
}

int main(void)
{
    linked_list_t *linked_list = NULL;
    char *name[] = {"Alex", "Basile", "Claire", "Clement", "Corentin", "David",
    "Felix", "Jules", "Khalid", "Marc", "Maxime", "Paul", "Selim", "Sofiane",
    "Xavier"};

    for (int i = 0; i < 15; i++)
        my_add_node(&linked_list, name[i]);
    my_rev_list(&linked_list);
    for (linked_list_t *list = linked_list; linked_list != NULL; list =
    list->next)
        printf("%s\n", list->name);
}
