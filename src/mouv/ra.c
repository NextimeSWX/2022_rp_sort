/*
 * E89 Pedagogical & Technical Lab
 * project:     ra
 * created on:  2023-01-10 - 11:12 +0100
 * 1st author:  nolan.vollet - nolan.vollet
 * description: effectue une rotation vers l’avant
 * sur la liste A – le 1er élément passe dernier
 */

#include "stu.h"

void ra(int *listeA, int nbnbA)
{
    int i;
    int tmp;

    i = 0;
    tmp = listeA[0];
    while (i <= nbnbA) {
        listeA[i] = listeA[i + 1];
        i += 1;
    }
    listeA[nbnbA - 1] = tmp;
    write(1,"ra  ",3);

}
