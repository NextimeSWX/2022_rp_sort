/*
 * E89 Pedagogical & Technical Lab
 * project:     sd
 * created on:  2023-01-10 - 11:12 +0100
 * 1st author:  nolan.vollet - nolan.vollet
 * description: échange toutes la listea avec la liste b
 */

#include "stu.h"

void sd(int *listeA, int *listeB)
{
    int *tmp;

    tmp = listeA;
    listeA = listeB;
    listeB = tmp;
    write(1,"sd ",3);
}
