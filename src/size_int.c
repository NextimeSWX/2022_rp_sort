/*
 * E89 Pedagogical & Technical Lab
 * project:     rp sort
 * created on:  2023-01-25 - 10:54 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: intlist.c
 */

#include "stu.h"






#include <stdio.h>

int size_int(char *buffer)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (buffer[i] != '\0') {
        i +=1;
        if (buffer[i] == ' ' || buffer[i] == '\n' || buffer[i] == '-') {
            j += 1;
            while (buffer[i] == '\n' || buffer[i] == ' ' || buffer[i] == '-') {
                i += 1;
            }
        }
    }
    //printf("%d \n", j);
    return (j);
}
