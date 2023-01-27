/*
 * E89 Pedagogical & Technical Lab
 * project:     sb
 * created on:  2023-01-10 - 11:12 +0100
 * 1st author:  nolan.vollet - nolan.vollet
 * description: change les 2 premeirs nb de la liste b
 */

#include "stu.h"

void sb(int *listeB)
{
    int tmp;

    tmp = listeB[0];
    listeB[0] = listeB[1];
    listeB[1] = tmp;
    write(1,"sb ",3);
}
