/*
 * E89 Pedagogical & Technical Lab
 * project:     rb
 * created on:  2023-01-10 - 11:12 +0100
 * 1st author:  nolan.vollet - nolan.vollet
 * description: effectue une rotation vers l’avant sur
 * la liste B – le 1er élément passe dernier
 */

#include "stu.h"

void rb(int *listeB, int nbnbB)
{
    int i;
    int tmp;

    i = 0;
    tmp = listeB[0];
    while (i <= nbnbB) {
        listeB[i] = listeB[i + 1];
        i += 1;
    }
    listeB[nbnbB] = tmp;
    write(1,"rb ",3);
}
