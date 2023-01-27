/*
 * E89 Pedagogical & Technical Lab
 * project:     rp sort
 * created on:  2023-01-09 - 09:45 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: convert.c
 */

#include "stu.h"

void stu_convert(int i, char *buffer)
{
    int *intbuffer;
    int size;
    int j;
    int k;

    i = 0;
    j = 1;
    k = 0;
    size = size_int(buffer);
    intbuffer = malloc(sizeof(int) * size + 1);
    while (buffer[i] != '\0') {
        i += 1;
        if (buffer[i] == ' ' || buffer[i] == '\n' || buffer[i] == '-') {
            intbuffer[k] = add(i, j, buffer);
            k += 1;
            while (buffer[i] == '\n' || buffer[i] == ' ' || buffer[i] == '-') {
                i += 1;
            }
            j = i;
        }
    }
    algo(intbuffer, size);
    free(intbuffer);
}
