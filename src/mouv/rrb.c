/*
 * E89 Pedagogical & Technical Lab
 * project:     rrb
 * created on:  2023-01-10 - 11:12 +0100
 * 1st author:  nolan.vollet - nolan.vollet
 * description: effectue une rotation inverse
 * sur la liste B – le dernier élément passe 1
 */

#include "stu.h"

void rrb(int *listeB,int nbnbB)
{
    int i;
    int tmp;

    tmp = listeB[nbnbB];
    i = nbnbB;
    while (i >= 0) {
        listeB[i] = listeB[i - 1];
        i -= 1;
    }
    listeB[0] = tmp;
    write(1,"rrb ",4);
}
