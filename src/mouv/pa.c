/*
 * E89 Pedagogical & Technical Lab
 * project:     pa
 * created on:  2023-01-10 - 11:12 +0100
 * 1st author:  nolan.vollet - nolan.vollet
 * description: retire le 1er élément de la liste
 * A et le place en 1re position de la liste B
 */

#include "stu.h"

void pa(int *listeA, int *listeB, int nbnbA, int nbnbB)
{
    int i;

    i = nbnbB;
    while (i >= 0) {
        listeB[i + 1] = listeB[i];
        i -= 1;
    }
    i = 1;
    listeB[0] = listeA[0];
    while (i <= nbnbA) {
        listeA[i - 1] = listeA[i];
        i += 1;
    }
    write(1,"pa ",3);
}
