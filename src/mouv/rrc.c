/*
 * E89 Pedagogical & Technical Lab
 * project:     rrc
 * created on:  2023-01-10 - 11:12 +0100
 * 1st author:  nolan.vollet - nolan.vollet
 * description: effectue rra et rrb en même temps.
 */

#include "stu.h"

void rrc(int *listeA, int *listeB, int nbnbA, int nbnbB)
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
    tmp = listeB[nbnbB];
    i = nbnbB;
    while (i >= 0) {
        listeB[i] = listeB[i - 1];
        i -= 1;
    }
    listeB[0] = tmp;
    write(1,"rrc ",4);
}
