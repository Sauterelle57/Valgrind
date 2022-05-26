/*
** EPITECH PROJECT, 2022
** SegV
** File description:
** segv
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "03.h"

int get_nb(char *command)
{
    char *tab[16] = {"one", "two", "three", "four", "five", "six", "seven", "eight",
    "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fiveteen", "sixteen"};

    for (int i = 0; i < 16; i++)
        if (strcmp(command, tab[i]) == 0)
            return (i);
    return (84);
}

void write_last(char *str, char *len)
{
    void (*write_letter[16])(char *) = {&write_one, &write_two,
    &write_three, &write_four, &write_five, &write_six, &write_seven,
    &write_eight, &write_nine, &write_ten, &write_eleven, &write_twelve,
    &write_thirteen, &write_fourteen, &write_fiveteen, &write_sixteen};

    write_letter[get_nb(len)](str);
}

int main(void)
{
    char *var1 = "mot";
    char *var2 = "unmot";
    char *var4 = "justemot";
    char *var3 = "unpetitmot";
    char *var5 = "unbongrandmot";

    get_len(var1);
    get_len(var2);
    get_len(var3);
    get_len(var4);
    get_len(var5);
}
