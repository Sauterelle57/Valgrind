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
    char *var = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for (int i = 0, j = 'a'; var[i]; i++, j++) {
        var[i] = j;
    }
    printf("%s\n", var);
}
