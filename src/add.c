/*
 * E89 Pedagogical & Technical Lab
 * project:     rp sort
 * created on:  2023-01-10 - 10:07 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 */

#include "stu.h"

int add(int i, int j, char *buffer)
{
    int resultat;
    int negatif;
    int tmp;
    int k;

    k = 1;
    i -= 1;
    tmp = 0;
    negatif = j - 1;
    resultat = 0;
    if (buffer[i] != '\0') {
        while (i >= j) {
            tmp = (buffer[i] - 48) * k;
            k *= 10;
            resultat += tmp;
            i -= 1;
        }
        if (buffer[negatif] == '-') {
            resultat *= -1;
        }
    }
    return (resultat);
}
