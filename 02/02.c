/*
** EPITECH PROJECT, 2022
** SegV
** File description:
** segv
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *var = malloc(sizeof(char) * 24);

    for (int i = 0, j = 'a'; j != 124; i++, j++) {
        var[i] = j;
    }
    printf("%s\n", var);
}
