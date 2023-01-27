/*
 * E89 Pedagogical & Technical Lab
 * project:     rp sort
 * created on:  2023-01-26 - 14:17 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: algo.c
 */

#include "stu.h"

static int highnbr(int *liste_a, int sizea, int tmp)
{
    int i;
    int high;

    i = 0;
    high = liste_a[0];
    while (i <  sizea) {
        if (high <= liste_a[i]) {
            high = liste_a[i];
            tmp = i;
            i += 1;
        } else {
            i += 1;
        }
    }
        return (tmp);
}

void algo(int *liste_a, int sizea)
{
    int tmp;
    int sizeb;
    int *liste_b;

    tmp = 0;
    sizeb = 0;
    liste_b = malloc(sizeof(int) * sizea + 1);
    while (sizea > 0) {
        tmp = highnbr(liste_a, sizea, tmp);
        while (tmp > 0) {
            ra(liste_a, sizea);
            tmp -= 1;
        }
        pa(liste_a, liste_b, sizea, sizeb);
        sizea -= 1;
        sizeb += 1;
    }
    while (sizeb >= 0) {
        rrb(liste_b, sizeb);
        pb(liste_a, liste_b, sizea, sizeb);
        sizea += 1;
        sizeb -= 1;
        }
     free(liste_b);
}
