/*
 * E89 Pedagogical & Technical Lab
 * project:     sa
 * created on:  2023-01-10 - 11:12 +0100
 * 1st author:  nolan.vollet - nolan.vollet
 * description: change les 2 premeirs nb de la liste a
 */

#include "stu.h"

void sa(int *listeA)
{
    int tmp;

    tmp = listeA[0];
    listeA[0] = listeA[1];
    listeA[1] = tmp;
    write(1,"sa ",3);
}
