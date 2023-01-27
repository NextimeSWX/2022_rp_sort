/*
 * E89 Pedagogical & Technical Lab
 * project:     pb
 * created on:  2023-01-10 - 11:12 +0100
 * 1st author:  nolan.vollet - nolan.vollet
 * description: retire le 1er élément de la liste B
 * et le place en 1re position de la liste A
 */

#include "stu.h"

void pb(int *listeA, int *listeB, int nbnbA, int nbnbB)
{
    int i;

    i = nbnbA;
    while (i >= 0) {
        listeA[i + 1] = listeA[i];
        i -= 1;
    }
    i = 1;
    listeA[0] = listeB[0];
    while (i <= nbnbB) {
        listeB[i - 1] = listeB[i];
        i += 1;
    }
    write(1,"pb ",3);
}
