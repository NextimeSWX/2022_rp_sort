/*
 * E89 Pedagogical & Technical Lab
 * project:     sc
 * created on:  2023-01-10 - 11:12 +0100
 * 1st author:  nolan.vollet - nolan.vollet
 * description: effectue sa et sb en même temp
 */

#include "stu.h"

void sc(int *listeA, int *listeB)
{
    int tmp;

    tmp = listeB[0];
    listeB[0] = listeB[1];
    listeB[1] = tmp;
    tmp = listeA[0];
    listeA[0] = listeA[1];
    listeA[1] = tmp;
    write(1,"sc ",3);
}
