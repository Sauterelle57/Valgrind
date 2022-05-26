/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** 03_2
*/

#include <stdio.h>
#include <string.h>
#include "03.h"

void get_len2(char *var)
{
    if (strlen(var) == 8)
        write_last(var, "height");
    if (strlen(var) == 9)
        write_last(var, "nine");
    if (strlen(var) == 10)
        write_last(var, "ten");
    if (strlen(var) == 11)
        write_last(var, "eleven");
    if (strlen(var) == 12)
        write_last(var, "twelve");
    if (strlen(var) == 13)
        write_last(var, "thirteen");
    if (strlen(var) == 14)
        write_last(var, "fourteen");
    if (strlen(var) == 15)
        write_last(var, "fiveteen");
    if (strlen(var) == 16)
        write_last(var, "sixteen");
}

void get_len(char *var)
{
    if (strlen(var) == 1)
        write_last(var, "one");
    if (strlen(var) == 2)
        write_last(var, "two");
    if (strlen(var) == 3)
        write_last(var, "three");
    if (strlen(var) == 4)
        write_last(var, "four");
    if (strlen(var) == 5)
        write_last(var, "five");
    if (strlen(var) == 6)
        write_last(var, "six");
    if (strlen(var) == 7)
        write_last(var, "seven");
    get_len2(var);
}
