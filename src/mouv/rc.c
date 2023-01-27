/*
 * E89 Pedagogical & Technical Lab
 * project:     rc
 * created on:  2023-01-10 - 11:12 +0100
 * 1st author:  nolan.vollet - nolan.vollet
 * description: effectue ra et rb en-même temps
 */

#include "stu.h"

void rc(int *listeA, int *listeB, int nbnbA, int nbnbB)
{
    int i;
    int tmp;

    i = 0;
    tmp = listeA[0];
    while (i <= nbnbA) {
        listeA[i] = listeA[i + 1];
        i += 1;
    }
    listeA[nbnbA] = tmp;
    tmp = listeB[0];
    i = 0;
    while (i <= nbnbB) {
        listeB[i] = listeB[i + 1];
        i += 1;
    }
    listeB[nbnbB] = tmp;
    write(1,"rc ",3);
}
