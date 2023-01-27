/*
 * E89 Pedagogical & Technical Lab
 * project:     rra
 * created on:  2023-01-10 - 11:12 +0100
 * 1st author:  nolan.vollet - nolan.vollet
 * description: effectue une rotation inverse sur
 * la liste A – le dernier élément passe 1
 */

#include "stu.h"

void rra(int *listeA, int nbnbA)
{
    int i;
    int tmp;

    i = nbnbA;
    tmp = listeA[nbnbA];
    while (i >= 0) {
        listeA[i] = listeA[i - 1];
        i -= 1;
    }
    listeA[0] = tmp;
    write(1,"rra ",4);
}
